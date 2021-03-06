// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_MOB_GROUPS_H
#define XIDB_MOB_GROUPS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobGroups_
  {
    struct Groupid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "groupid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T groupid;
            T& operator()() { return groupid; }
            const T& operator()() const { return groupid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Poolid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "poolid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T poolid;
            T& operator()() { return poolid; }
            const T& operator()() const { return poolid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Zoneid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "zoneid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T zoneid;
            T& operator()() { return zoneid; }
            const T& operator()() const { return zoneid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T name;
            T& operator()() { return name; }
            const T& operator()() const { return name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Respawntime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "respawntime";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T respawntime;
            T& operator()() { return respawntime; }
            const T& operator()() const { return respawntime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Spawntype
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spawntype";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spawntype;
            T& operator()() { return spawntype; }
            const T& operator()() const { return spawntype; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Dropid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dropid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dropid;
            T& operator()() { return dropid; }
            const T& operator()() const { return dropid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct HP
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "HP";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T HP;
            T& operator()() { return HP; }
            const T& operator()() const { return HP; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer>;
    };
    struct MP
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "MP";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T MP;
            T& operator()() { return MP; }
            const T& operator()() const { return MP; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer>;
    };
    struct MinLevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "minLevel";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T minLevel;
            T& operator()() { return minLevel; }
            const T& operator()() const { return minLevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct MaxLevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "maxLevel";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T maxLevel;
            T& operator()() { return maxLevel; }
            const T& operator()() const { return maxLevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Allegiance
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "allegiance";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T allegiance;
            T& operator()() { return allegiance; }
            const T& operator()() const { return allegiance; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace MobGroups_

  struct MobGroups: sqlpp::table_t<MobGroups,
               MobGroups_::Groupid,
               MobGroups_::Poolid,
               MobGroups_::Zoneid,
               MobGroups_::Name,
               MobGroups_::Respawntime,
               MobGroups_::Spawntype,
               MobGroups_::Dropid,
               MobGroups_::HP,
               MobGroups_::MP,
               MobGroups_::MinLevel,
               MobGroups_::MaxLevel,
               MobGroups_::Allegiance>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_groups";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobGroups;
        T& operator()() { return mobGroups; }
        const T& operator()() const { return mobGroups; }
      };
    };
  };
} // namespace xidb
#endif
