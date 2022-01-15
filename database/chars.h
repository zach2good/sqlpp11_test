// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_CHARS_H
#define XIDB_CHARS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace Chars_
  {
    struct Charid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "charid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T charid;
            T& operator()() { return charid; }
            const T& operator()() const { return charid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Accid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "accid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T accid;
            T& operator()() { return accid; }
            const T& operator()() const { return accid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Charname
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "charname";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T charname;
            T& operator()() { return charname; }
            const T& operator()() const { return charname; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Nation
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "nation";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T nation;
            T& operator()() { return nation; }
            const T& operator()() const { return nation; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct PosZone
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_zone";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posZone;
            T& operator()() { return posZone; }
            const T& operator()() const { return posZone; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct PosPrevzone
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_prevzone";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posPrevzone;
            T& operator()() { return posPrevzone; }
            const T& operator()() const { return posPrevzone; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct PosRot
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_rot";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posRot;
            T& operator()() { return posRot; }
            const T& operator()() const { return posRot; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct PosX
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_x";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posX;
            T& operator()() { return posX; }
            const T& operator()() const { return posX; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct PosY
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_y";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posY;
            T& operator()() { return posY; }
            const T& operator()() const { return posY; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct PosZ
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pos_z";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T posZ;
            T& operator()() { return posZ; }
            const T& operator()() const { return posZ; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct Moghouse
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "moghouse";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T moghouse;
            T& operator()() { return moghouse; }
            const T& operator()() const { return moghouse; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Boundary
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "boundary";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T boundary;
            T& operator()() { return boundary; }
            const T& operator()() const { return boundary; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct HomeZone
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "home_zone";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T homeZone;
            T& operator()() { return homeZone; }
            const T& operator()() const { return homeZone; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct HomeRot
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "home_rot";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T homeRot;
            T& operator()() { return homeRot; }
            const T& operator()() const { return homeRot; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct HomeX
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "home_x";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T homeX;
            T& operator()() { return homeX; }
            const T& operator()() const { return homeX; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct HomeY
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "home_y";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T homeY;
            T& operator()() { return homeY; }
            const T& operator()() const { return homeY; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct HomeZ
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "home_z";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T homeZ;
            T& operator()() { return homeZ; }
            const T& operator()() const { return homeZ; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct Missions
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "missions";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T missions;
            T& operator()() { return missions; }
            const T& operator()() const { return missions; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Assault
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "assault";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T assault;
            T& operator()() { return assault; }
            const T& operator()() const { return assault; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Campaign
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "campaign";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T campaign;
            T& operator()() { return campaign; }
            const T& operator()() const { return campaign; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Eminence
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "eminence";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T eminence;
            T& operator()() { return eminence; }
            const T& operator()() const { return eminence; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Quests
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "quests";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T quests;
            T& operator()() { return quests; }
            const T& operator()() const { return quests; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Keyitems
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "keyitems";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T keyitems;
            T& operator()() { return keyitems; }
            const T& operator()() const { return keyitems; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct SetBlueSpells
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "set_blue_spells";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T setBlueSpells;
            T& operator()() { return setBlueSpells; }
            const T& operator()() const { return setBlueSpells; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Abilities
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "abilities";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T abilities;
            T& operator()() { return abilities; }
            const T& operator()() const { return abilities; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Weaponskills
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "weaponskills";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T weaponskills;
            T& operator()() { return weaponskills; }
            const T& operator()() const { return weaponskills; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Titles
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "titles";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T titles;
            T& operator()() { return titles; }
            const T& operator()() const { return titles; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Zones
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "zones";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T zones;
            T& operator()() { return zones; }
            const T& operator()() const { return zones; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Playtime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "playtime";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T playtime;
            T& operator()() { return playtime; }
            const T& operator()() const { return playtime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct UnlockedWeapons
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "unlocked_weapons";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T unlockedWeapons;
            T& operator()() { return unlockedWeapons; }
            const T& operator()() const { return unlockedWeapons; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Gmlevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "gmlevel";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T gmlevel;
            T& operator()() { return gmlevel; }
            const T& operator()() const { return gmlevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Languages
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "languages";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T languages;
            T& operator()() { return languages; }
            const T& operator()() const { return languages; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Mentor
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "mentor";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T mentor;
            T& operator()() { return mentor; }
            const T& operator()() const { return mentor; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct JobMaster
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "job_master";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jobMaster;
            T& operator()() { return jobMaster; }
            const T& operator()() const { return jobMaster; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct CampaignAllegiance
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "campaign_allegiance";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T campaignAllegiance;
            T& operator()() { return campaignAllegiance; }
            const T& operator()() const { return campaignAllegiance; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Isstylelocked
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "isstylelocked";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T isstylelocked;
            T& operator()() { return isstylelocked; }
            const T& operator()() const { return isstylelocked; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct Nnameflags
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "nnameflags";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T nnameflags;
            T& operator()() { return nnameflags; }
            const T& operator()() const { return nnameflags; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Moghancement
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "moghancement";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T moghancement;
            T& operator()() { return moghancement; }
            const T& operator()() const { return moghancement; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Timecreated
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "timecreated";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T timecreated;
            T& operator()() { return timecreated; }
            const T& operator()() const { return timecreated; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point>;
    };
    struct Lastupdate
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "lastupdate";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T lastupdate;
            T& operator()() { return lastupdate; }
            const T& operator()() const { return lastupdate; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point>;
    };
  } // namespace Chars_

  struct Chars: sqlpp::table_t<Chars,
               Chars_::Charid,
               Chars_::Accid,
               Chars_::Charname,
               Chars_::Nation,
               Chars_::PosZone,
               Chars_::PosPrevzone,
               Chars_::PosRot,
               Chars_::PosX,
               Chars_::PosY,
               Chars_::PosZ,
               Chars_::Moghouse,
               Chars_::Boundary,
               Chars_::HomeZone,
               Chars_::HomeRot,
               Chars_::HomeX,
               Chars_::HomeY,
               Chars_::HomeZ,
               Chars_::Missions,
               Chars_::Assault,
               Chars_::Campaign,
               Chars_::Eminence,
               Chars_::Quests,
               Chars_::Keyitems,
               Chars_::SetBlueSpells,
               Chars_::Abilities,
               Chars_::Weaponskills,
               Chars_::Titles,
               Chars_::Zones,
               Chars_::Playtime,
               Chars_::UnlockedWeapons,
               Chars_::Gmlevel,
               Chars_::Languages,
               Chars_::Mentor,
               Chars_::JobMaster,
               Chars_::CampaignAllegiance,
               Chars_::Isstylelocked,
               Chars_::Nnameflags,
               Chars_::Moghancement,
               Chars_::Timecreated,
               Chars_::Lastupdate>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "chars";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T chars;
        T& operator()() { return chars; }
        const T& operator()() const { return chars; }
      };
    };
  };
} // namespace xidb
#endif