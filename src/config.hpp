#pragma once

#include "filesystem.hpp"
#include "lib/noncopyable.hpp"
#include "snail/window.hpp"
#include "config_def.hpp"
#include <map>
#include <string>
#include <iostream>



namespace elona
{

class config_def;

class config : public lib::noncopyable
{
public:
    static config& instance();

    void init();
    void write();

    int alert;
    int alwayscenter;
    int animewait;
    int attackanime;
    int attackwait;
    int autonumlock;
    int autosave;
    int autoturn;
    int damage_popup;
    std::string display_mode;
    int env;
    int extraclass;
    int extrahelp;
    int extrarace;
    std::string font1;
    std::string font2;
    int fullscreen;
    int heart;
    int hideautoidentify;
    int hideshopresult;
    int hp_bar;
    int ignoredislike;
    int joypad;
    int keywait;
    int language;
    int leash_icon;
    int msgaddtime;
    int msgtrans;
    int music;
    int net;
    int netchat;
    int netwish;
    int noadebug;
    int objectshadow;
    int restock_interval;
    int runscroll;
    int runwait;
    int scroll;
    int scrsync;
    int serverlist;
    int shadow;
    int skiprandevents;
    int sound;
    int startrun;
    std::string startup_script;
    int story;
    int wait1;
    int walkwait;
    int windowanime;
    int wizard;
    int xkey;
    int zkey;

    int use_autopick;
    int use_autopick_in_home;
    int use_autopick_in_dungeon;
    int use_autopick_in_shop;
    int use_autopick_in_ranch;
    int use_autopick_in_crop;
    int use_autopick_in_storage_house;
    int use_autopick_in_shelter;
    int use_autopick_in_town;
    int use_autopick_in_conquered_nefia;
    int use_autopick_in_conquered_quest_map;

    bool is_test = false; // testing use only

    void set_bind_callback(const std::string& key,
                           std::function<void(const hcl::Value&)> callback)
    {
        callbacks.emplace(key, std::move(callback));
    }

    template <typename T>
    T get(const std::string& key)
    {
        if (storage.find(key) == storage.end())
        {
            // TODO fallback to default specified in config definition instead
            throw std::runtime_error("No such config value " + key);
        }
        if (!storage[key].is<T>())
        {
            // TODO fallback to default specified in config definition instead
            throw std::runtime_error("Expected different type for key " + key);
        }
        return storage[key].as<T>();
    }

    void set(const std::string& key, const hcl::Value value)
    {
        std::cout << "Setting " << key << ": " << value << std::endl;
        storage.emplace(key, std::move(value));

        if (callbacks.find(key) != callbacks.end())
        {
            callbacks[key](value);
        }
    }

private:
    config() {}
    ~config() = default;

    void load(std::istream&, const std::string&);

    void visit(const hcl::Value&, const std::string&, const std::string&);
    void visit_object(const hcl::Object&, const std::string&, const std::string&);

    config_def def;
    std::map<std::string, hcl::Value> storage;
    std::map<std::string, std::function<void(const hcl::Value&)>> callbacks;
};



void load_config2(const fs::path& json_file);
void load_config(const fs::path& json_file);

void set_config(const std::string& key, int value);
void set_config(const std::string& key, const std::string& value);
void set_config(const std::string& key, const std::string& value1, int value2);

snail::window::fullscreen_mode_t config_get_fullscreen_mode();


} // namespace elona
