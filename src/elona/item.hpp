#pragma once

#include <memory>
#include <variant>
#include <vector>

#include "../util/range.hpp"
#include "data/types/type_item.hpp"
#include "dice.hpp"
#include "enchantment.hpp"
#include "enums.hpp"
#include "eobject/eobject.hpp"
#include "position.hpp"



namespace elona
{

struct Inventory;



// strongly-typed index
enum class InventorySlot : size_t
{
};



struct Item
{
private:
    Inventory* _inventory = nullptr;

    InventorySlot _slot;

    friend Inventory;

public:
    Item();

    InventorySlot slot() const noexcept
    {
        return _slot;
    }

    // for integration with legacy code
    int global_index() const noexcept;

    Inventory* inventory() const noexcept
    {
        return _inventory;
    }

    ObjId obj_id;

private:
    lua_int _number{};

public:
    lua_int value{};
    int image = 0;
    data::InstanceId id{};
    Quality quality = Quality::none;

private:
    Position _position;

public:
    const Position& position() const noexcept
    {
        return _position;
    }


    void set_position(const Position& new_pos);



    lua_int weight{};
    IdentifyState identify_state = IdentifyState::unidentified;
    lua_int charges{};
    Dice dice{};
    lua_int hit_bonus{};
    lua_int dv{};
    lua_int pv{};
    int skill = 0;
    CurseState curse_state = CurseState::none;
    lua_index equipped_slot{};
    int function = 0;
    lua_int bonus_value{};
    OwnState own_state{};
    int tint = 0;
    int subname = 0;
    data::InstanceId material{};
    int param1 = 0;
    int param2 = 0;
    int param3 = 0;
    int param4 = 0;
    lua_int identify_level{};
    lua_int turn{};

    bool is_acidproof{};
    bool is_fireproof{};
    bool is_coldproof{};
    bool is_precious{};
    bool has_charges{};
    bool has_cooldown_time{};
    bool is_aphrodisiac{};
    bool is_poisoned{};
    bool is_blessed_by_ehekatl{};
    bool is_stolen{};
    bool is_quest_target{};
    bool is_no_drop{};
    bool is_alive{};
    bool is_eternal_force{};
    bool is_handmade{};
    bool is_showroom_only{};

    EnchantmentList enchantments;


    void clear();

    bool almost_equals(const Item& other, bool ignore_position) const;

    // for identifying the type of a Lua reference
    static std::string lua_type()
    {
        return "LuaItem";
    }

    lua_int number() const
    {
        return _number;
    }

    void set_number(lua_int new_number);
    void modify_number(lua_int delta);
    void remove();


    void on_create();
    void on_remove();



    bool operator==(const Item& other) const noexcept
    {
        return this == &other;
    }


    bool operator!=(const Item& other) const noexcept
    {
        return !(*this == other);
    }



    bool is_equipped() const noexcept
    {
        return !equipped_slot.is_nil();
    }



    static void copy(const Item& from, Item& to)
    {
        const auto inventory_save = to._inventory;
        const auto slot_save = to._slot;
        to = from;
        to._inventory = inventory_save;
        to._slot = slot_save;
    }


private:
    Item(const Item&) = default;
    Item(Item&&) = default;
    Item& operator=(const Item&) = default;
    Item& operator=(Item&&) = default;
};



struct Character;



struct Inventory
{
public:
    using storage_type = std::vector<OptionalItemRef>;



    Inventory(size_t inventory_size, int inventory_id);


    const OptionalItemRef& at(InventorySlot slot)
    {
        return _storage.at(static_cast<size_t>(slot));
    }

    void remove(InventorySlot slot)
    {
        _storage.at(static_cast<size_t>(slot)) = nullptr;
    }


    bool has_free_slot() const;
    optional<InventorySlot> get_free_slot();


    size_t size() const noexcept
    {
        return _storage.size();
    }


    ItemRef create(InventorySlot slot);


    void clear();



    /**
     * Exchange item @a a and @a b.
     * If they points to the same object, does nothing. For example, assume that
     * @a a is an apinut owned by you and @a b is a fake gold bar owned by an
     * NPC. After calling the function, @a a is owned by the NPC and @a b is
     * owned by you. NOTE: The content of each reference continues to refer to
     * the same object before the call.
     *
     * @param a one item
     * @param b the other item
     */
    static void exchange(const ItemRef& a, const ItemRef& b);


    /**
     * Move all items in @a source to @a destination.
     */
    static void move_all(Inventory& source, Inventory& destination);



    struct const_iterator
    {
        friend Inventory;


        bool operator==(const const_iterator& other) const
        {
            return _itr == other._itr;
        }


        bool operator!=(const const_iterator& other) const
        {
            return !(*this == other);
        }


        decltype(auto) operator*() const
        {
            return _itr->unwrap();
        }


        const_iterator& operator++()
        {
            ++_itr;
            skip_over_null_elements();
            return *this;
        }



    private:
        storage_type::const_iterator _itr;
        storage_type::const_iterator _end;


        const_iterator(
            storage_type::const_iterator itr,
            storage_type::const_iterator end)
            : _itr(itr)
            , _end(end)
        {
            skip_over_null_elements();
        }


        void skip_over_null_elements()
        {
            while (_itr != _end && _itr->is_null())
            {
                ++_itr;
            }
        }
    };



    const_iterator begin() const
    {
        return const_iterator(_storage.begin(), _storage.end());
    }

    const_iterator end() const
    {
        return const_iterator(_storage.end(), _storage.end());
    }


    const_iterator cbegin() const
    {
        return begin();
    }

    const_iterator cend() const
    {
        return end();
    }



    int inventory_id() const noexcept
    {
        return _inventory_id;
    }


    optional<size_t> capacity() const noexcept
    {
        return _capacity;
    }


    void set_capacity(optional<size_t> new_capacity);



private:
    storage_type _storage;
    int _inventory_id;
    optional<size_t> _capacity;
};



using InventoryRef = Inventory*;



struct AllInventory
{
private:
    using storage_type = std::vector<Inventory>;
    using iterator_type = storage_type::iterator;
    using iterator_pair_type = range::iterator_pair_t<iterator_type>;



public:
    AllInventory();


    ItemRef operator[](int index);


    InventoryRef ground();
    InventoryRef tmp();
    InventoryRef for_chara(const Character& chara);
    InventoryRef by_index(int index);

    iterator_pair_type all();
    iterator_pair_type global();
    iterator_pair_type map_local();



private:
    std::vector<Inventory> _inventories;
};



extern AllInventory g_inv;



IdentifyState item_identify(const ItemRef& item, IdentifyState level);
IdentifyState item_identify(const ItemRef& item, int power);

void item_checkknown(const ItemRef& item);

/**
 * TODO
 */
ItemRef item_separate(
    const ItemRef& item,
    const InventoryRef& inv,
    InventorySlot slot,
    lua_int number);

/**
 * TODO
 */
ItemRef
item_copy(const ItemRef& item, const InventoryRef& inv, InventorySlot slot);

void item_acid(const Character& owner, OptionalItemRef item = nullptr);

void itemturn(const ItemRef& item);

OptionalItemRef itemfind(const InventoryRef& inv, data::InstanceId id);
OptionalItemRef itemfind(const InventoryRef& inv, int subcategory);

int itemusingfind(const ItemRef& item, bool disallow_pc = false);

enum class ItemFindLocation
{
    player_inventory,
    ground,
    player_inventory_and_ground,
};

/**
 * Tries to find an item in the player's inventory, the ground, or both. Returns
 * the item's reference or none if not found.
 */
OptionalItemRef item_find(
    data::InstanceId id,
    ItemFindLocation = ItemFindLocation::player_inventory_and_ground);
OptionalItemRef item_find(
    ItemCategory category,
    ItemFindLocation = ItemFindLocation::player_inventory_and_ground);

/**
 * Separate @a item's stack.
 * @param item the item to separate
 */
ItemRef item_separate(const ItemRef& stacked_item);

void item_dump_desc(const ItemRef&);

bool item_fire(
    const InventoryRef& inv,
    const OptionalItemRef& burned_item = nullptr);
void mapitem_fire(optional_ref<Character> arsonist, int x, int y);
bool item_cold(
    const InventoryRef& inv,
    const OptionalItemRef& destroyed_item = nullptr);
void mapitem_cold(int x, int y);



/**
 * Represents item owner. It is one of the following:
 * - Character
 * - Map
 * - Temporary
 */
struct ItemOwner
{
    static ItemOwner character(elona::Character& chara) noexcept
    {
        return ItemOwner{Character{chara}};
    }


    static ItemOwner map() noexcept
    {
        return ItemOwner{Map{}};
    }


    static ItemOwner temporary() noexcept
    {
        return ItemOwner{Temporary{}};
    }



    bool is_character() const noexcept
    {
        return std::holds_alternative<Character>(_inner);
    }


    bool is_map() const noexcept
    {
        return std::holds_alternative<Map>(_inner);
    }


    bool is_temporary() const noexcept
    {
        return std::holds_alternative<Temporary>(_inner);
    }


    optional_ref<elona::Character> as_character()
    {
        if (const auto c = std::get_if<Character>(&_inner))
        {
            return c->chara;
        }
        else
        {
            return none;
        }
    }



private:
    struct Character
    {
        elona::Character& chara;
    };

    struct Map
    {
    };

    struct Temporary
    {
    };


    std::variant<Character, Map, Temporary> _inner;



    ItemOwner(const std::variant<Character, Map, Temporary>& owner)
        : _inner(owner)
    {
    }
};


/**
 * Get an owner of @a item.
 *
 * @param item The item to query.
 * @return @a item's owner.
 */
ItemOwner item_get_owner(const ItemRef& item);


/**
 * Returns if @a item is on ground.
 *
 * @param item The item to query.
 * @return True if @a item is on ground; otherwise false
 */
bool item_is_on_ground(const ItemRef& item);



void remain_make(const ItemRef& remain, const Character& chara);


void item_drop(
    const ItemRef& item_in_inventory,
    lua_int num,
    bool building_shelter = false);
void item_build_shelter(const ItemRef& shelter);


enum class ItemDescriptionType : int
{
    normal = 0, // rgb(0, 0, 0)
    raises_skill = 1, // rgb(0, 100, 0)
    raises_stat = 2, // rgb(0, 0, 100)
    raises_resist = 3, // rgb(80, 100, 0)
    enchantment = 4, // rgb(80, 50, 0)
    weapon_info = 5, // rgb(0, 0, 0)
    armor_info = 6, // rgb(0, 0, 0)
    text = 7, // rgb(0, 0, 0)
    maintains_skill = 8, // rgb(0, 100, 100)
    negative_effect = 9, // rgb(180, 0, 0)

    small_font = -1,
    small_font_italic = -2,
};

size_t item_load_desc(const ItemRef& item);


data::InstanceId iequiploc(const ItemRef& item);

void item_db_set_basic_stats(const ItemRef& item, int integer_id);
void item_db_get_description(const ItemRef& item, int integer_id);
void item_db_get_charge_level(const ItemRef& item, int integer_id);
void item_db_set_full_stats(const ItemRef& item, int integer_id);
void item_db_on_read(Character& reader, const ItemRef& item, int integer_id);
void item_db_on_zap(const ItemRef& item, int integer_id);
void item_db_on_drink(
    Character& chara,
    const OptionalItemRef& item,
    int integer_id);


std::vector<int> item_get_inheritance(const ItemRef& item);


void auto_identify();
void begintempinv();
void exittempinv();
bool cargocheck(const ItemRef& item);
ItemRef item_convert_artifact(
    const ItemRef& artifact,
    bool ignore_map_inventory = false);
void damage_by_cursed_equipments(Character& chara);
void dipcursed(const ItemRef& item);
int efstatusfix(int = 0, int = 0, int = 0, int = 0);
void equip_melee_weapon(Character& chara);
OptionalItemRef mapitemfind(const Position& pos, data::InstanceId id);
std::string
itemname(const ItemRef& item, lua_int number = 0, bool with_article = true);

} // namespace elona
