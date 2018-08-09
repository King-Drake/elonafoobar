#pragma once

#include "elona.hpp"
#include "optional.hpp"
#include "position.hpp"
#include "random.hpp"
#include "talk.hpp"


#ifdef ELONA_DEFINE_GLOBAL_INSTANCE
#define ELONA_EXTERN(declaration) declaration
#else
#define ELONA_EXTERN(declaration) extern declaration
#endif

namespace elona
{

ELONA_EXTERN(elona_vector1<int> ap);
ELONA_EXTERN(int wishfilter);
ELONA_EXTERN(int nooracle);
// casino.cpp / casino_card.cpp
ELONA_EXTERN(int atxthrough);
ELONA_EXTERN(std::string atxbg);
ELONA_EXTERN(std::string atxbgbk);
ELONA_EXTERN(elona_vector1<std::string> atxinfon);
ELONA_EXTERN(elona_vector1<int> atxid);
ELONA_EXTERN(int atxlv);
ELONA_EXTERN(int nojoker);
ELONA_EXTERN(elona_vector1<int> fsetwear);
ELONA_EXTERN(elona_vector1<int> fsetitem);
ELONA_EXTERN(int txtadvscreenupdate);
ELONA_EXTERN(elona_vector2<int> matref);
ELONA_EXTERN(elona_vector1<std::string> matname);

// fov.cpp
ELONA_EXTERN(elona_vector2<int> route);
ELONA_EXTERN(int maxroute);

// building.cpp
ELONA_EXTERN(int tlocinitx);
ELONA_EXTERN(int tlocinity);
ELONA_EXTERN(elona_vector1<int> isethirerole);
ELONA_EXTERN(elona_vector1<int> isethire);
ELONA_EXTERN(elona_vector1<int> income);
ELONA_EXTERN(elona_vector2<std::string> rankn);
ELONA_EXTERN(int renewmulti);
ELONA_EXTERN(elona_vector2<int> bdref);

// ui.cpp
ELONA_EXTERN(int inf_clocky);
ELONA_EXTERN(int inf_msgh);
ELONA_EXTERN(int inf_ver);

// ui.cpp/menu.cpp
ELONA_EXTERN(int curmenu);
ELONA_EXTERN(elona_vector1<std::string> headtemp);
ELONA_EXTERN(std::string username);
ELONA_EXTERN(int autoturn);
ELONA_EXTERN(int firstautoturn);
ELONA_EXTERN(int racount);
ELONA_EXTERN(int csskill);
ELONA_EXTERN(elona_vector1<int> randcolor);
ELONA_EXTERN(elona_vector1<std::string> matdesc);
ELONA_EXTERN(int attackvar);
ELONA_EXTERN(int dump_return);
ELONA_EXTERN(std::string nquestdate);
ELONA_EXTERN(int lv);
ELONA_EXTERN(elona_vector3<int> pochart);
ELONA_EXTERN(elona_vector2<int> podata);
ELONA_EXTERN(elona_vector1<std::string> popostname);
ELONA_EXTERN(int refreshmode);
ELONA_EXTERN(bool quest_teleport);
ELONA_EXTERN(int gspdorg);
ELONA_EXTERN(int gspd);
ELONA_EXTERN(int scposval);
ELONA_EXTERN(int weatherbk);
ELONA_EXTERN(elona_vector1<int> inhlist);


// crafting.cpp / blending.cpp
ELONA_EXTERN(elona_vector1<int> rpsourcelist);
ELONA_EXTERN(int prodtype);
ELONA_EXTERN(elona_vector2<int> matspot);

// quest.cpp
ELONA_EXTERN(elona_vector1<int> fsetcollect);
ELONA_EXTERN(elona_vector1<int> asettown);
ELONA_EXTERN(elona_vector1<int> fsetdeliver);
ELONA_EXTERN(elona_vector1<int> fsetsupply);
ELONA_EXTERN(elona_vector1<int> fsetmagic);
ELONA_EXTERN(elona_vector1<int> fsetarmor);
ELONA_EXTERN(elona_vector1<int> fsetweapon);
ELONA_EXTERN(elona_vector1<int> fsetrewardsupply);

// map.cpp/mapgen.cpp
ELONA_EXTERN(int tile_trap);
ELONA_EXTERN(int tile_doorclosed4);
ELONA_EXTERN(int tile_dooropen);
ELONA_EXTERN(int tile_downlocked);
ELONA_EXTERN(int tile_re);
ELONA_EXTERN(int tile_plant);
ELONA_EXTERN(int tile_board);
ELONA_EXTERN(int tile_votebox);
ELONA_EXTERN(int tile_townboard);
ELONA_EXTERN(elona_vector1<int> isetgod);
ELONA_EXTERN(elona_vector1<int> isetcrop);
ELONA_EXTERN(int rdtry);

// food.cpp
ELONA_EXTERN(int enc);
ELONA_EXTERN(int enc2);

// shop.cpp
ELONA_EXTERN(elona_vector1<int> isetdeed);

// talk.cpp
ELONA_EXTERN(elona_vector2<std::string> actor);

// mef.cpp
ELONA_EXTERN(elona_vector2<int> mef);
ELONA_EXTERN(elona_vector2<int> mefsubref);

// map_cell.cpp
ELONA_EXTERN(int cellchara);
ELONA_EXTERN(int cellfeat);

// enchantment.cpp
ELONA_EXTERN(elona_vector2<int> encammoref);

// item.hpp/itemgen.hpp
ELONA_EXTERN(elona_vector1<int> isetbook);
ELONA_EXTERN(elona_vector1<int> moneybox);

// ai.cpp
ELONA_EXTERN(elona_vector1<int> isetthrowpotionminor);
ELONA_EXTERN(elona_vector1<int> isetthrowpotionmajor);
ELONA_EXTERN(elona_vector1<int> isetthrowpotiongreater);
ELONA_EXTERN(int npccostmp);

// command.cpp
ELONA_EXTERN(int usermapid);
ELONA_EXTERN(int refx);
ELONA_EXTERN(int refy);
ELONA_EXTERN(int movx);
ELONA_EXTERN(int movy);
ELONA_EXTERN(int dbg_freemove);
ELONA_EXTERN(int ri);

// dmgheal.cpp
ELONA_EXTERN(std::string ndeathcause);
ELONA_EXTERN(int catitem);
ELONA_EXTERN(int rollanatomy);
ELONA_EXTERN(int rtdmg);

// draw.cpp
ELONA_EXTERN(elona_vector1<std::string> tname);

// turn_sequence.cpp
ELONA_EXTERN(int pcnoise);
ELONA_EXTERN(int chatturn);
ELONA_EXTERN(int tgloc);
ELONA_EXTERN(std::string chatnew);
ELONA_EXTERN(int dbg_skipevent);
ELONA_EXTERN(int findlocmode);
ELONA_EXTERN(int dirsub);
ELONA_EXTERN(int mousex);
ELONA_EXTERN(int mousey);
ELONA_EXTERN(bool player_queried_for_input);

// network.cpp
ELONA_EXTERN(elona_vector1<std::string> netbuf);

// activity.cpp
ELONA_EXTERN(elona_vector1<int> fsetperform);

ELONA_EXTERN(elona_vector1<int> _randcolor);
ELONA_EXTERN(elona_vector1<int> arenaop);
ELONA_EXTERN(elona_vector1<int> chatval);
ELONA_EXTERN(elona_vector1<int> commark);
ELONA_EXTERN(elona_vector1<int> cyclemax);
ELONA_EXTERN(elona_vector1<int> deck);
ELONA_EXTERN(elona_vector1<int> deliver);
ELONA_EXTERN(elona_vector1<int> dir);
ELONA_EXTERN(elona_vector1<int> drop);
ELONA_EXTERN(elona_vector1<int> dx);
ELONA_EXTERN(elona_vector1<int> evdata1);
ELONA_EXTERN(elona_vector1<int> evdata2);
ELONA_EXTERN(elona_vector1<int> evlist);
ELONA_EXTERN(elona_vector1<int> feat);
ELONA_EXTERN(elona_vector1<int> fishanime);
ELONA_EXTERN(elona_vector1<int> fixeditemenc);
ELONA_EXTERN(elona_vector1<int> floorstack);
ELONA_EXTERN(elona_vector1<int> followerexist);
ELONA_EXTERN(elona_vector1<int> followerin);
ELONA_EXTERN(elona_vector1<int> fsetchest);
ELONA_EXTERN(elona_vector1<int> gdata);
ELONA_EXTERN(elona_vector1<int> genetemp);
ELONA_EXTERN(elona_vector1<int> giftvalue);
ELONA_EXTERN(elona_vector1<int> i);
ELONA_EXTERN(elona_vector1<int> ilight);
ELONA_EXTERN(elona_vector1<int> invcontainer);
ELONA_EXTERN(elona_vector1<int> invctrl);
ELONA_EXTERN(elona_vector1<int> invicon);
ELONA_EXTERN(elona_vector1<int> invmark);
ELONA_EXTERN(elona_vector1<int> iorgweight);
ELONA_EXTERN(elona_vector1<int> ipicref);
ELONA_EXTERN(elona_vector1<int> irandomname);
ELONA_EXTERN(elona_vector1<int> isetfruit);
ELONA_EXTERN(elona_vector1<int> mainskill);
ELONA_EXTERN(elona_vector1<int> mat);
ELONA_EXTERN(elona_vector1<int> matneed);
ELONA_EXTERN(elona_vector1<int> mdata);
ELONA_EXTERN(elona_vector1<int> mdatatmp);
ELONA_EXTERN(elona_vector1<int> p);
ELONA_EXTERN(elona_vector1<int> recipememory);
ELONA_EXTERN(elona_vector1<int> reph);
ELONA_EXTERN(elona_vector1<int> repw);
ELONA_EXTERN(elona_vector1<int> rowactre);
ELONA_EXTERN(elona_vector1<int> rtval);
ELONA_EXTERN(elona_vector1<int> sell);
ELONA_EXTERN(elona_vector1<int> spact);
ELONA_EXTERN(elona_vector1<int> spell);
ELONA_EXTERN(elona_vector1<int> sx);
ELONA_EXTERN(elona_vector1<int> sy);
ELONA_EXTERN(elona_vector1<int> tc);
ELONA_EXTERN(elona_vector1<int> tcol_at_txtfunc);
ELONA_EXTERN(elona_vector1<int> tile);
ELONA_EXTERN(elona_vector1<int> tile_default);
ELONA_EXTERN(elona_vector1<int> tile_fog);
ELONA_EXTERN(elona_vector1<int> tile_room);
ELONA_EXTERN(elona_vector1<int> tile_tunnel);
ELONA_EXTERN(elona_vector1<int> tile_wall);
ELONA_EXTERN(elona_vector1<int> trait);
ELONA_EXTERN(elona_vector1<int> traitref);
ELONA_EXTERN(elona_vector1<int> trate);
ELONA_EXTERN(elona_vector1<int> wh);
ELONA_EXTERN(elona_vector1<int> windowshadow);
ELONA_EXTERN(elona_vector1<int> x);
ELONA_EXTERN(elona_vector1<int> y);
ELONA_EXTERN(elona_vector1<std::string> ammoname);
ELONA_EXTERN(std::vector<std::string> artifactlocation);
ELONA_EXTERN(elona_vector1<std::string> bdrefn);
ELONA_EXTERN(elona_vector1<std::string> biten);
ELONA_EXTERN(elona_vector1<std::string> booktitle);
ELONA_EXTERN(elona_vector1<std::string> buff);
ELONA_EXTERN(elona_vector1<std::string> buffboard);
ELONA_EXTERN(elona_vector1<std::string> cardrefn);
ELONA_EXTERN(elona_vector1<std::string> description);
ELONA_EXTERN(elona_vector1<std::string> egominorn);
ELONA_EXTERN(elona_vector1<std::string> egoname);
ELONA_EXTERN(elona_vector1<std::string> filter_creature);
ELONA_EXTERN(elona_vector1<std::string> filtern);
ELONA_EXTERN(elona_vector1<std::string> fltnrace);
ELONA_EXTERN(elona_vector1<std::string> gdatan);
ELONA_EXTERN(elona_vector1<std::string> giftn);
ELONA_EXTERN(elona_vector1<std::string> ialphanameref);
ELONA_EXTERN(elona_vector1<std::string> iknownnameref);
ELONA_EXTERN(elona_vector1<std::string> inputlog);
ELONA_EXTERN(elona_vector1<std::string> invkey);
ELONA_EXTERN(elona_vector1<std::string> ioriginalnameref2);
ELONA_EXTERN(elona_vector1<std::string> ioriginalnameref);
ELONA_EXTERN(elona_vector1<std::string> jkey);
ELONA_EXTERN(elona_vector1<std::string> key);
ELONA_EXTERN(std::string key_identify);
ELONA_EXTERN(std::string key_pageup);
ELONA_EXTERN(std::string key_pagedown);
ELONA_EXTERN(std::string key_cancel);
ELONA_EXTERN(std::string key_help);
ELONA_EXTERN(std::string key_msglog);
ELONA_EXTERN(std::string key_enter);
ELONA_EXTERN(std::string key_save);
ELONA_EXTERN(std::string key_north);
ELONA_EXTERN(std::string key_northeast);
ELONA_EXTERN(std::string key_east);
ELONA_EXTERN(std::string key_southeast);
ELONA_EXTERN(std::string key_south);
ELONA_EXTERN(std::string key_southwest);
ELONA_EXTERN(std::string key_west);
ELONA_EXTERN(std::string key_northwest);
ELONA_EXTERN(std::string key_skill);
ELONA_EXTERN(std::string key_close);
ELONA_EXTERN(std::string key_cast);
ELONA_EXTERN(std::string key_drink);
ELONA_EXTERN(std::string key_read);
ELONA_EXTERN(std::string key_zap);
ELONA_EXTERN(std::string key_fire);
ELONA_EXTERN(std::string key_search);
ELONA_EXTERN(std::string key_target);
ELONA_EXTERN(std::string key_dig);
ELONA_EXTERN(std::string key_wait);
ELONA_EXTERN(std::string key_inventory);
ELONA_EXTERN(std::string key_drop);
ELONA_EXTERN(std::string key_get);
ELONA_EXTERN(std::string key_charainfo);
ELONA_EXTERN(std::string key_eat);
ELONA_EXTERN(std::string key_wear);
ELONA_EXTERN(std::string key_godown);
ELONA_EXTERN(std::string key_goup);
ELONA_EXTERN(std::string key_interact);
ELONA_EXTERN(std::string key_rest);
ELONA_EXTERN(std::string key_use);
ELONA_EXTERN(std::string key_bash);
ELONA_EXTERN(std::string key_open);
ELONA_EXTERN(std::string key_dip);
ELONA_EXTERN(std::string key_pray);
ELONA_EXTERN(std::string key_offer);
ELONA_EXTERN(std::string key_journal);
ELONA_EXTERN(std::string key_material);
ELONA_EXTERN(std::string key_quick);
ELONA_EXTERN(std::string key_get2);
ELONA_EXTERN(std::string key_trait);
ELONA_EXTERN(std::string key_look);
ELONA_EXTERN(std::string key_give);
ELONA_EXTERN(std::string key_prev);
ELONA_EXTERN(std::string key_next);
ELONA_EXTERN(std::string key_quickinv);
ELONA_EXTERN(std::string key_throw);
ELONA_EXTERN(std::string key_esc);
ELONA_EXTERN(int key_alt);
ELONA_EXTERN(int key_ctrl);
ELONA_EXTERN(std::string key_mode);
ELONA_EXTERN(std::string key_ammo);
ELONA_EXTERN(std::string key_mode2);
ELONA_EXTERN(std::string key_quicksave);
ELONA_EXTERN(std::string key_quickload);
ELONA_EXTERN(std::string key_autodig);
ELONA_EXTERN(elona_vector1<std::string> key_list);
ELONA_EXTERN(elona_vector1<std::string> key_select);
ELONA_EXTERN(elona_vector1<std::string> keylog);
ELONA_EXTERN(elona_vector1<std::string> magebookn);
ELONA_EXTERN(elona_vector1<std::string> mdatan);
ELONA_EXTERN(elona_vector1<std::string> moneyboxn);
ELONA_EXTERN(elona_vector1<std::string> msg);
ELONA_EXTERN(elona_vector1<std::string> msgtemp);
ELONA_EXTERN(elona_vector1<std::string> msgtempprev);
ELONA_EXTERN(elona_vector1<std::string> musicfile);
ELONA_EXTERN(elona_vector1<std::string> newsbuff);
ELONA_EXTERN(elona_vector1<std::string> playerheader);
ELONA_EXTERN(elona_vector1<std::string> q);
ELONA_EXTERN(elona_vector1<std::string> qname);
ELONA_EXTERN(elona_vector1<std::string> randn1);
ELONA_EXTERN(elona_vector1<std::string> rn1);
ELONA_EXTERN(elona_vector1<std::string> rn2);
ELONA_EXTERN(elona_vector1<std::string> rtvaln);
ELONA_EXTERN(elona_vector1<std::string> s1);
ELONA_EXTERN(elona_vector1<std::string> s);
ELONA_EXTERN(elona_vector1<std::string> traitrefn2);
ELONA_EXTERN(elona_vector1<std::string> traitrefn);
ELONA_EXTERN(elona_vector1<std::string> untaglist);
ELONA_EXTERN(elona_vector2<int> adata);
ELONA_EXTERN(elona_vector2<int> breathlist);
ELONA_EXTERN(elona_vector2<int> c_col);
ELONA_EXTERN(elona_vector2<int> card);
ELONA_EXTERN(elona_vector2<int> chipm);
ELONA_EXTERN(elona_vector2<int> cmapdata);
ELONA_EXTERN(elona_vector2<int> cycle);
ELONA_EXTERN(elona_vector2<int> dblist);
ELONA_EXTERN(elona_vector2<int> dirchk);
ELONA_EXTERN(elona_vector2<int> dirxy);
ELONA_EXTERN(elona_vector2<int> encprocref);
ELONA_EXTERN(elona_vector1<int> eqweapon1);
ELONA_EXTERN(elona_vector1<int> eqrange);
ELONA_EXTERN(elona_vector1<int> eqammo);
ELONA_EXTERN(elona_vector1<int> eqring1);
ELONA_EXTERN(elona_vector2<int> itemmemory);
ELONA_EXTERN(elona_vector2<int> list);
ELONA_EXTERN(elona_vector2<int> mapsync);
ELONA_EXTERN(elona_vector2<int> npcmemory);
ELONA_EXTERN(elona_vector2<int> pcc);
ELONA_EXTERN(elona_vector2<int> picfood);
ELONA_EXTERN(elona_vector2<int> qdata);
ELONA_EXTERN(elona_vector2<int> slight);
ELONA_EXTERN(elona_vector2<int> userdata);
ELONA_EXTERN(elona_vector2<std::string> _melee);
ELONA_EXTERN(elona_vector2<std::string> cdatan2);
ELONA_EXTERN(elona_vector2<std::string> cdatan);
ELONA_EXTERN(elona_vector2<std::string> listn);
ELONA_EXTERN(elona_vector2<std::string> mapnamerd);
ELONA_EXTERN(elona_vector2<std::string> promptl);
ELONA_EXTERN(elona_vector2<std::string> rnlist);
ELONA_EXTERN(elona_vector2<std::string> userdatan);
ELONA_EXTERN(elona_vector3<int> bddata);
ELONA_EXTERN(elona_vector3<int> efmap);
ELONA_EXTERN(elona_vector3<int> map);
ELONA_EXTERN(int allyctrl);
ELONA_EXTERN(int am);
ELONA_EXTERN(int ammo);
ELONA_EXTERN(int ammoproc);
ELONA_EXTERN(int ammoprocbk);
ELONA_EXTERN(int animode);
ELONA_EXTERN(int aniy);
ELONA_EXTERN(int area);
ELONA_EXTERN(int attacknum);
ELONA_EXTERN(int attackrange);
ELONA_EXTERN(int attackskill);
ELONA_EXTERN(int atxspot);
ELONA_EXTERN(int autosave);
ELONA_EXTERN(int body);
ELONA_EXTERN(int bonus);
ELONA_EXTERN(int camera);
ELONA_EXTERN(int cardrefattack);
ELONA_EXTERN(int cardrefcost);
ELONA_EXTERN(int cardrefdomain);
ELONA_EXTERN(int cardrefhp);
ELONA_EXTERN(int cardrefpic);
ELONA_EXTERN(int cardrefrare);
ELONA_EXTERN(int cardrefskill);
ELONA_EXTERN(int cardrefskillcost);
ELONA_EXTERN(int cardreftype);
ELONA_EXTERN(int cc);
ELONA_EXTERN(int ccbk);
ELONA_EXTERN(int cellaccess);
ELONA_EXTERN(int chatesc);
ELONA_EXTERN(int chatflag);
ELONA_EXTERN(int chatteleport);
ELONA_EXTERN(int ci);
ELONA_EXTERN(int cidip);
ELONA_EXTERN(int city);
ELONA_EXTERN(int client);
ELONA_EXTERN(int cm);
ELONA_EXTERN(int cmbg);
ELONA_EXTERN(int cmsex);
ELONA_EXTERN(int cmshade);
ELONA_EXTERN(int comctrl);
ELONA_EXTERN(int cooktool);
ELONA_EXTERN(int creaturepack);
ELONA_EXTERN(int critical);
ELONA_EXTERN(int crop);
ELONA_EXTERN(int cs);
ELONA_EXTERN(int cs_bk2);
ELONA_EXTERN(int cs_bk);
ELONA_EXTERN(int csctrl);
ELONA_EXTERN(int cspecialeq);
ELONA_EXTERN(int cw);
ELONA_EXTERN(int cxinit);
ELONA_EXTERN(int cyinit);
ELONA_EXTERN(int damage);
ELONA_EXTERN(int dbg_revealmap);
ELONA_EXTERN(int dbid);
ELONA_EXTERN(int dbmode);
ELONA_EXTERN(int dbspec);
ELONA_EXTERN(int dice1);
ELONA_EXTERN(int dice2);
ELONA_EXTERN(int distance);
ELONA_EXTERN(int dmg);
ELONA_EXTERN(int dmgfix);
ELONA_EXTERN(double dmgmulti);
ELONA_EXTERN(int dropval);
ELONA_EXTERN(int dy);
ELONA_EXTERN(int efcancel);
ELONA_EXTERN(int efid);
ELONA_EXTERN(int efp);
ELONA_EXTERN(int efsource);
ELONA_EXTERN(curse_state_t efstatus);
ELONA_EXTERN(int egg);
ELONA_EXTERN(int egolv);
ELONA_EXTERN(int ele);
ELONA_EXTERN(int elep);
ELONA_EXTERN(int elona_export);
ELONA_EXTERN(int en);
ELONA_EXTERN(int encounter);
ELONA_EXTERN(int encounterlv);
ELONA_EXTERN(int encounterref);
ELONA_EXTERN(int enemylv);
ELONA_EXTERN(int enemyteam);
ELONA_EXTERN(int eqmultiweapon);
ELONA_EXTERN(int eqtwohand);
ELONA_EXTERN(int equip);
ELONA_EXTERN(int evnum);
ELONA_EXTERN(int exp);
ELONA_EXTERN(int f2);
ELONA_EXTERN(int f);
ELONA_EXTERN(int filtermax);
ELONA_EXTERN(int firstturn);
ELONA_EXTERN(int fish);
ELONA_EXTERN(int fishx);
ELONA_EXTERN(int fishy);
ELONA_EXTERN(int fixlv);
ELONA_EXTERN(int fixmaterial);
ELONA_EXTERN(int fixtransfermap);
ELONA_EXTERN(int fltselect);
ELONA_EXTERN(int flttypemajor);
ELONA_EXTERN(int flttypeminor);
ELONA_EXTERN(int foot);
ELONA_EXTERN(int ghelp);
ELONA_EXTERN(int gold);
ELONA_EXTERN(int grown);
ELONA_EXTERN(int header);
ELONA_EXTERN(int hire);
ELONA_EXTERN(int homemapmode);
ELONA_EXTERN(int hour_played);
ELONA_EXTERN(int ichargelevel);
ELONA_EXTERN(identification_state_t idtresult);
ELONA_EXTERN(int importmode);
ELONA_EXTERN(int in);
ELONA_EXTERN(int inf_clockh);
ELONA_EXTERN(int inf_clockw);
ELONA_EXTERN(int inf_clockx);
ELONA_EXTERN(int inf_maxlog);
ELONA_EXTERN(size_t inf_maxmsglen);
ELONA_EXTERN(int inf_mesfont);
ELONA_EXTERN(int inf_msgline);
ELONA_EXTERN(int inf_msgspace);
ELONA_EXTERN(int inf_msgx);
ELONA_EXTERN(int inf_msgy);
ELONA_EXTERN(int inf_screenh);
ELONA_EXTERN(int inf_screenw);
ELONA_EXTERN(int inf_screenx);
ELONA_EXTERN(int inf_screeny);
ELONA_EXTERN(int inf_tiles);
ELONA_EXTERN(int inf_verh);
ELONA_EXTERN(int inf_vertype);
ELONA_EXTERN(int inf_very);
ELONA_EXTERN(int initeco);
ELONA_EXTERN(int initlv);
ELONA_EXTERN(int initnum);
ELONA_EXTERN(int invally);
ELONA_EXTERN(int invfile);
ELONA_EXTERN(int invhead);
ELONA_EXTERN(int invrange);
ELONA_EXTERN(int invsc);
ELONA_EXTERN(int invsubroutine);
ELONA_EXTERN(int jp);
ELONA_EXTERN(int key_escape);
ELONA_EXTERN(int key_shift);
ELONA_EXTERN(int key_tab);
ELONA_EXTERN(int keybd_attacking);
ELONA_EXTERN(int keybd_wait);
ELONA_EXTERN(int keyhalt);
ELONA_EXTERN(int keyrange);
ELONA_EXTERN(int keywait);
ELONA_EXTERN(int lastctrl);
ELONA_EXTERN(int len);
ELONA_EXTERN(int levelexitby);
ELONA_EXTERN(int listmax);
ELONA_EXTERN(int livestock);
ELONA_EXTERN(int lomiaseaster);
ELONA_EXTERN(int mapstartx);
ELONA_EXTERN(int mapstarty);
ELONA_EXTERN(int mapsubroutine);
ELONA_EXTERN(int mapupdate);
ELONA_EXTERN(int marry);
ELONA_EXTERN(int maxbreath);
ELONA_EXTERN(int maxitemid);
ELONA_EXTERN(int medit);
ELONA_EXTERN(int menucycle);
ELONA_EXTERN(int minlevel);
ELONA_EXTERN(int mode);
ELONA_EXTERN(int mousel);
ELONA_EXTERN(int msgalert);
ELONA_EXTERN(int msgdup);
ELONA_EXTERN(int msgkeep);
ELONA_EXTERN(int msgline);
ELONA_EXTERN(int msync);
ELONA_EXTERN(int mtilefilecur);
ELONA_EXTERN(int musicloop);
ELONA_EXTERN(int mutex_handle);
ELONA_EXTERN(int nostack);
ELONA_EXTERN(int novoidlv);
ELONA_EXTERN(int nowindowanime);
ELONA_EXTERN(int objfix);
ELONA_EXTERN(int objlv);
ELONA_EXTERN(int obvious);
ELONA_EXTERN(int oc);
ELONA_EXTERN(int orgdmg);
ELONA_EXTERN(int p2);
ELONA_EXTERN(int page);
ELONA_EXTERN(int page_bk);
ELONA_EXTERN(int pagemax);
ELONA_EXTERN(int pagesize);
ELONA_EXTERN(int pcattacker);
ELONA_EXTERN(int petarenawin);
ELONA_EXTERN(int potionspill);
ELONA_EXTERN(int potionthrow);
ELONA_EXTERN(int promptmax);
ELONA_EXTERN(int promptx);
ELONA_EXTERN(int prompty);
ELONA_EXTERN(int prot);
ELONA_EXTERN(int protdice1);
ELONA_EXTERN(int protdice2);
ELONA_EXTERN(int quickkeywait);
ELONA_EXTERN(int quickpage);
ELONA_EXTERN(int r2);
ELONA_EXTERN(int r);
ELONA_EXTERN(int raderh);
ELONA_EXTERN(int raderw);
ELONA_EXTERN(int raderx);
ELONA_EXTERN(int radery);
ELONA_EXTERN(int range_);
ELONA_EXTERN(int rapidmagic);
ELONA_EXTERN(int rc);
ELONA_EXTERN(int ref1);
ELONA_EXTERN(int ref2);
ELONA_EXTERN(int reftype);
ELONA_EXTERN(int reftypeminor);
ELONA_EXTERN(int returnfromidentify);
ELONA_EXTERN(int rq);
ELONA_EXTERN(int running);
ELONA_EXTERN(int sc);
ELONA_EXTERN(int scene_cut);
ELONA_EXTERN(int sceneid);
ELONA_EXTERN(int scenemode);
ELONA_EXTERN(int screenmsgy);
ELONA_EXTERN(int screenupdate);
ELONA_EXTERN(int scroll);
ELONA_EXTERN(int scrollanime);
ELONA_EXTERN(int scrollp);
ELONA_EXTERN(int scrturn);
ELONA_EXTERN(int scx);
ELONA_EXTERN(int scxbk);
ELONA_EXTERN(int scy);
ELONA_EXTERN(int scybk);
ELONA_EXTERN(int sexvalue);
ELONA_EXTERN(int shade);
ELONA_EXTERN(int shoptrade);
ELONA_EXTERN(int showresist);
ELONA_EXTERN(int size);
ELONA_EXTERN(int sizefix);
ELONA_EXTERN(int sound);
ELONA_EXTERN(int step);
ELONA_EXTERN(int strsize);
ELONA_EXTERN(int supply);
ELONA_EXTERN(int sxfix);
ELONA_EXTERN(int syfix);
ELONA_EXTERN(int t);
ELONA_EXTERN(int tail);
ELONA_EXTERN(int tcbk);
ELONA_EXTERN(int tcopy);
ELONA_EXTERN(int tg);
ELONA_EXTERN(int ti);
ELONA_EXTERN(int tile_doorclosed);
ELONA_EXTERN(int tile_downstairs);
ELONA_EXTERN(int tile_hidden);
ELONA_EXTERN(int tile_upstairs);
ELONA_EXTERN(int time_begin);
ELONA_EXTERN(int time_warn);
ELONA_EXTERN(int tlocx);
ELONA_EXTERN(int tlocy);
ELONA_EXTERN(int tnew);
ELONA_EXTERN(int tx);
ELONA_EXTERN(int txt3rd);
ELONA_EXTERN(int ty);
ELONA_EXTERN(int usernpcmax);
ELONA_EXTERN(int userrelation);
ELONA_EXTERN(int vfix);
ELONA_EXTERN(int voidlv);
ELONA_EXTERN(int windowh);
ELONA_EXTERN(int windoww);
ELONA_EXTERN(int windowx);
ELONA_EXTERN(int windowy);
ELONA_EXTERN(int worker);
ELONA_EXTERN(int ww);
ELONA_EXTERN(int wx);
ELONA_EXTERN(int wy);
ELONA_EXTERN(int x1);
ELONA_EXTERN(int x2);
ELONA_EXTERN(int x_at_txtfunc);
ELONA_EXTERN(int y1);
ELONA_EXTERN(int y2);
ELONA_EXTERN(int y_at_txtfunc);
ELONA_EXTERN(std::string cardrefrace);
ELONA_EXTERN(std::string classname);
ELONA_EXTERN(std::string cmaka);
ELONA_EXTERN(std::string dbidn);
ELONA_EXTERN(std::string defload);
ELONA_EXTERN(std::string fmapfile);
ELONA_EXTERN(std::string geneuse);
ELONA_EXTERN(std::string homepage);
ELONA_EXTERN(std::string key_alter);
ELONA_EXTERN(std::string lastword);
ELONA_EXTERN(std::string mid);
ELONA_EXTERN(std::string note_buff);
ELONA_EXTERN(std::string playerid);
ELONA_EXTERN(std::string refstr);
ELONA_EXTERN(std::string s2);
ELONA_EXTERN(std::string strblank);
ELONA_EXTERN(std::string strhint1);
ELONA_EXTERN(std::string strhint2);
ELONA_EXTERN(std::string strhint3);
ELONA_EXTERN(std::string strhint3b);
ELONA_EXTERN(std::string strhint4);
ELONA_EXTERN(std::string strhint5);
ELONA_EXTERN(std::string strhint5b);
ELONA_EXTERN(std::string strhint7);
ELONA_EXTERN(std::string txtcopy);
ELONA_EXTERN(std::string userfile);
ELONA_EXTERN(std::string usermsg);
int access_character_info();
int breath_list();
int calcincome(int = 0);
int calcmagiccontrol(int = 0, int = 0);
int calcstartcard(int = 0);
int card_ref(int = 0);
int cardcanblock(int = 0);
int cardcandeclareattack(int = 0);
int cardcanuseskill(int = 0);
int cargocheck();
int cbreeder(int = 0);
int cdbit(int = 0, int = 0);
void initialize_pc_character();
int convertartifact(int = 0, int = 0);
int create_card(int = 0, int = 0);
int direction(int = 0, int = 0, int = 0, int = 0);
int discsetmc();
int dist(int = 0, int = 0, int = 0, int = 0);
int dist_town();
int efstatusfix(int = 0, int = 0, int = 0, int = 0);
int eleinfo(int = 0, int = 0);
int findunid(const std::string&);
int fltsetdungeon();
int gameover();
void getinheritance(int, elona_vector1<int>&, int&);
int getdecksum(int = 0);
int getholdersum(int = 0);
int getspotsum(int = 0);
int getunid(int = 0);
int getworker(int = 0, int = 0);
int iequiploc(int = 0);
int imeget();
int key_direction();
int access_item_db(int);
int get_required_craft_materials();
int try_to_cast_spell();
int try_to_reveal();
int can_evade_trap();
int try_to_disarm_trap();
int try_to_perceive_npc(int);
int initialize_world_map();
int place_random_nefias();
int get_card_info();
int label_1835();
int label_1845();
int label_1898();
int label_1931();
int label_1932();
int label_19432();
int target_position();
int ctrl_ally();
int show_hire_menu();
int show_spell_writer_menu();
int select_alias(int);
int change_npc_tone();
int change_appearance();
int label_2044();
int label_2072();
int label_2073();
int can_do_ranged_attack();
int label_2083();
int ask_direction();
int decode_book();
int read_normal_book();
int label_2167();
int label_2168();
int drink_potion();
int drink_well();
int read_scroll();
int label_2172();
int label_2174();
int label_2175();
int magic();
int pick_up_item();
int drop_item();
int equip_item(int);
int unlock_box(int);
void do_ranged_attack();
int gain_skills_by_geen_engineering();
int transplant_body_parts();
int new_ally_joins();
int label_2672();
int label_2694();
int label_2695();
int map_barrel(int = 0, int = 0);
int map_connectroom();
int map_createroom(int = 0);
int map_digcheck(int = 0, int = 0);
int map_digtoentrance1(int = 0, int = 0, int = 0, int = 0, int = 0);
int map_placedownstairs(int = 0, int = 0);
int map_placeupstairs(int = 0, int = 0);
int map_trap(int = 0, int = 0, int = 0, int = 0);
int map_web(int = 0, int = 0, int = 0);
int mapitemfind(int = 0, int = 0, int = 0);
int pileremain();
int prodcheck();
int putcard(int = 0, int = 0);
int randattb();
int random_material(int = 0, int = 0);
int randomele();
int randskill();
int relationbetween(int, int);
int roll(int, int, int);
int roll_max(int, int, int);
int roundmargin(int = 0, int = 0);
int route_info(int&, int&, int = 0);
int talk_conv(std::string&, int = 0);
int winposy(int = 0, int = 0);
std::string zentohan(const std::string&);
std::string _aru(int = 0);
std::string _da(int = 0);
std::string _dana(int = 0);
std::string _daro(int = 0);
std::string _dozo(int = 0);
std::string _ga(int = 0);
std::string _ka(int = 0);
std::string _kana(int = 0);
std::string _kimi(int = 0);
std::string _kure(int = 0);
std::string _na(int = 0);
std::string _nda(int = 0);
std::string _noka(int = 0);
std::string _ore(int = 0);
std::string _rob(int = 0);
std::string _ru(int = 0);
std::string _s(int, bool = false);
std::string _s2(int = 0);
std::string _ta(int = 0);
std::string _tanomu(int = 0);
std::string _thanks(int = 0);
std::string _u(int = 0);
std::string _yo(int = 0);
std::string _yoro(int = 0);
std::string aln(int = 0);
std::string cnvarticle(const std::string&);
std::string cnvdate(int, bool = true);
std::string cnven(const std::string&);
std::string cnveqweight(int = 0);
std::string cnvfix(int = 0);
std::string cnvitemname(int = 0);
std::string cnvplaytime(int = 0);
std::string cnvrank(int = 0);
std::string cnvrare(int = 0);
std::string cnvweight(int = 0);
std::string does(int = 0);
std::string elename(int = 0);
std::string fixtxt(const std::string&, int = 0);
std::string fltname(int = 0);
std::string getnpctxt(const std::string&, const std::string&);
std::string guildname();
std::string have(int = 0);
std::string he(int = 0, int = 0);
std::string him(int = 0, int = 0);
std::string his(int = 0, int = 0);
std::string is(int = 0);
std::string is2(int = 0);
std::string itemname(int = 0, int = 0, int = 0);
std::string lang(const std::string&, const std::string&);
std::string mapfile(int = 0);
std::string maplevel(int = 0);
std::string mapname(int, bool = false);
std::string name(int = 0);
std::string npcn(int = 0);
std::string random_title(int = 0);
std::string randomname();
std::string ranktitle(int = 0);
std::string sncnv(const std::string&);
std::string txtbuilding(int = 0, int = 0);
std::string txtitemoncell(int = 0, int = 0);
std::string txtskillchange(int, int, bool);
std::string your(int);
std::string yourself(int = 0);
void actionproc();
void addefmap(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
void anime_halt();
void animeblood(int = 0, int = 0, int = 0);
void animeload(int = 0, int = 0);
void auto_turn(int delay);
void atxinit();
void begintempinv();
void calcdecksize();
void calcdomain();
void calcstartattb(int = 0);
void cardpos(int = 0, int = 0);
void cdbitmod(int = 0, int = 0, int = 0);
void check_kill(int = 0, int = 0);
void cnvbonus(int = 0, int = 0);
void cpflip();
void cpisenemy();
void cpisme();
void csfix();
void cslinedown();
void cslineup();
void cursor_check();
void cutname(std::string&, int = 0);
void delbottomcard(int = 0);
void delmef(int = 0);
void dipcursed(int = 0, int = 0);
void dmgcard(int = 0, int = 0);
void dmgplayer(int = 0, int = 0);
void eatstatus(curse_state_t, int);
void efllistadd(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
void exittempinv();
void fix_input_chat(std::string&);
void fix_input_chat2(std::string&);
void fixaiact(int = 0);
void flt(int = 0, int = 0);
void fltn(const std::string&);
void getrandomcard(int = 0);
void go_hostile();
void gravecard(int = 0);
void healcon(int = 0, int = 0, int = 0);
void help_halt();
void hostileaction(int = 0, int = 0);
void imeset(int = 0);
void incognitobegin();
void incognitoend();
std::pair<int, int> inv_getheader(int);
void initialize_rankn();
void initialize_post_data();
void initialize_building_daga();
void clear_trait_data();
void gain_race_feat();
void initialize_nefia_names();
void initialize_picfood();
void parse_talk_file();
void read_talk_file(const std::string&);
void get_npc_talk();
void finish_elona();
void append_subquest_journal(int);
void append_quest_item_journal();
void parse_quest_board_text(int);
void initialize_cloud_data();
void load_random_name_table();
void load_random_title_table();
std::string cheer_up_message(int);
void initialize_enchantment_data();
void initialize_ego_data();
void add_enchantments_depending_on_ego();
void add_enchantment_by_fixed_ego();
void add_enchantments();
void initialize_item_material_data();
void initialize_item_material();
void determine_item_material();
void change_item_material();
void apply_item_material();
void set_material_specific_attributes();
void itemname_additional_info();
void initialize_craft_material_data();
void get_random_item_id();
void set_item_info();
void proc_turn_end(int);
void refresh_burden_state();
void revive_character();
void do_chara_revival();
void label_15380();
void label_1539();
void label_15390();
void label_1540();
void clear_background_in_character_making();
void initialize_set_of_random_generation();
void character_drops_item();
void food_gets_rotten();
void damage_by_cursed_equipments();
void proc_pregnant();
void proc_negative_equipments();
void auto_identify();
void init_item_quality_curse_state_material_and_equipments();
void calc_furniture_value();
void get_pregnant();
void initialize_cell_object_data();
void initialize_random_nefia_rdtype6();
void initialize_quest_map_town();
void initialize_random_nefia_rdtype8();
void initialize_random_nefia_rdtype9();
void label_1709();
void initialize_random_nefia_rdtype10();
void initialize_home_mdata();
turn_result_t build_new_building();
void initialize_home_adata();
void label_1724();
void show_shop_log();
void label_1726();
void calc_collection_value(bool);
void calc_museum_rank();
void calc_hairloom_value(int);
void calc_home_rank();
void update_ranch();
void set_character_generation_filter();
void monster_respawn();
turn_result_t exit_map();
void prepare_charas_for_map_unload();
void save_map_local_data();
turn_result_t initialize_map();
void label_1745();
void label_1746();
void label_1748();
void label_1749();
void label_1750();
void label_1751();
void initialize_adata();
void label_1754();
void label_1755();
void label_1773();
void label_1793();
void label_1802();
void label_1815();
void label_1816();
void label_1817();
void label_1818();
void label_1819();
void label_1823();
void label_1824();
void label_1825();
void label_1826();
void label_1827();
void label_1828();
void label_1836();
void label_1839();
void label_1840();
void label_1842();
void label_1844();
void label_18462();
void label_1848();
void casino_dealer();
void casino_choose_card();
void label_1870();
void label_1871();
void label_1872();
void casino_acquire_items();
void casino_random_site();
void label_1877();
void casino_wrapper();
bool casino_start();
bool casino_blackjack();
void begin_to_believe_god();
void label_1892();
void start_stealing();
void supply_income();
void initialize_recipememory();
void initialize_recipe();
void label_1933();
void label_1935();
turn_result_t step_into_gate();
void label_1958();
void label_1964();
void deco_traits_menu();
void list_adventurers();
turn_result_t call_npc();
void show_book_window();
void label_2031();
void label_2032();
void set_pcc_info(int);
void append_accuracy_info(int);
void show_weapon_dice(int);
void equip_melee_weapon();
turn_result_t try_interact_with_npc();
void sort_list_by_column1();
void sort_list_and_listn_by_column1();
void label_2076();
void try_to_return();
turn_result_t do_gatcha();
void dump_player_info();
void remove_card_and_figures();
void label_2088();
void migrate_save_data(const fs::path& filepath);
void label_2090();
void get_inheritance();
void load_gene_files();
void save_gene();
void create_cnpc();
void create_new_cnpc();
void label_2109(int);
void load_save_data();
void do_save_game();
void save_game();
turn_result_t do_enter_strange_gate();
void main_title_loop();
turn_result_t do_debug_console();
turn_result_t do_exit_debug_console();
void disarm_trap();
void proc_trap();
void label_2149();
void label_2150();
void label_2151();
void do_rest();
void label_2153();
void label_2161();
void show_eating_message();
void heal_both_rider_and_mount();
void heal_completely();
void unequip_item(int);
void lost_body_part(int);
turn_result_t do_bash();
turn_result_t proc_movement_event();
void label_2206();
turn_result_t do_use_stairs_command(int);
void open_box();
void open_new_year_gift();
turn_result_t try_to_open_locked_door();
void try_to_melee_attack();
void do_physical_attack();
void proc_weapon_enchantments();
void discover_trap();
void discover_hidden_path();
turn_result_t do_plant();
void grow_plant(int);
void try_to_grow_plant(int = 0);
void harvest_plant(int);
void label_2236();
void initialize_economy();
void show_city_chart();
void show_economy_window();
void show_politics_window();
void get_random_npc_id();
void do_play_scene();
void text_replace_tags_in_quest_board();
void text_replace_tags_in_quest_text();
void label_2685();
turn_result_t npc_turn();
turn_result_t proc_misc_npc_map_events();
turn_result_t proc_ally_town_training(bool = false);
turn_result_t proc_ai_basic();
void show_quick_menu();
void show_ex_help();
void label_2702();
void show_game_help();
turn_result_t show_chat_history();
turn_result_t show_message_log();
void initialize_jkey();
void label_2720();
turn_result_t play_scene();
bool turn_wrapper();
turn_result_t pass_turns(bool);
turn_result_t turn_begin();
void lovemiracle(int = 0);
void resistmod(int = 0, int = 0, int = 0);
void weather_changes_by_location();
void weather_changes();
void update_emoicon();
turn_result_t turn_end();
optional<turn_result_t> check_angband();
void conquer_lesimas();
void play_the_last_scene_again();
turn_result_t pc_died();
void show_game_score_ranking();
void proc_event();
void lenfix(std::string&, int = 0);
void make_sound(int = 0, int = 0, int = 0, int = 0, int = 0, int = 0);
void makecardlist();
void map_converttile();
void map_createroomdoor();
void map_initcustom(const std::string&);
void map_initialize();
turn_result_t do_use_magic();
void modrank(int = 0, int = 0, int = 0);
void msg_clear();
void msg_halt();
void msg_newline();
void opencard(int = 0);
void page_load();
void page_save();
void remain_make(int = 0, int = 0);
void removeworker(int = 0);
void ride_begin(int = 0);
void ride_end();
void rm_crlf(std::string&);
void saccard(int = 0, int = 0);
void savecycle();
void setunid(int = 0, int = 0);
void showcard();
void showcardholder();
void showcardpile();

std::string snarmor(const std::string&);
std::string snbakery(const std::string&);
std::string snblack(const std::string&);
std::string snfish(const std::string&);
std::string snfood(const std::string&);
std::string sngeneral(const std::string&);
std::string sngoods(const std::string&);
std::string sninn(const std::string&);
std::string snmagic(const std::string&);
std::string sntrade(const std::string&);
std::string sntrainer(const std::string&);
void sortenc(int = 0);
void spillblood(int = 0, int = 0, int = 0);
void spillfrag(int = 0, int = 0, int = 0);
void stxt(int, const std::string&);
void tcgdeck();
void tcgdraw();
void tcgdrawbg();
void tcgdrawcard(int = 0, int = 0);
void tcginit();
void tcgmain();
void text_set();
void turn_aggro(int = 0, int = 0, int = 0);
void txt_conv();
void txtcontinue();
void txtef(color_index_t);
void txtef(int = 0);
void txteledmg(int = 0, int = 0, int = 0, int = 0);
void txtnew();
void txtsetlastword();
std::vector<std::string> txtsetwinword(int);
std::string txttargetlevel(int, int);
void txttargetnpc(int = 0, int = 0, int = 0);
void wake_up();
void wet(int = 0, int = 0);
void cell_draw();

template <typename T>
void txt()
{
    static_assert(false_v<T>, u8"Need one argument at least.");
}



inline std::string txt_tostr(const std::string& s)
{
    return s;
}



inline std::string txt_tostr(elona_vector1<std::string>& v)
{
    return v(0);
}



template <typename... Args>
void txt(Args&&... args)
{
    std::vector<std::string> text{txt_tostr(args)...};
    msgtemp = text[rnd(text.size())];
    txt_conv();
    tcol_at_txtfunc(0) = 255;
    tcol_at_txtfunc(1) = 255;
    tcol_at_txtfunc(2) = 255;
}



} // namespace elona
