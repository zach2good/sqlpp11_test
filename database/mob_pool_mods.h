// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_MOB_POOL_MODS_H
#define XIDB_MOB_POOL_MODS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobPoolMods_
  {
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
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Modid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modid;
            T& operator()() { return modid; }
            const T& operator()() const { return modid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Value
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "value";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T value;
            T& operator()() { return value; }
            const T& operator()() const { return value; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct IsMobMod
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "is_mob_mod";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T isMobMod;
            T& operator()() { return isMobMod; }
            const T& operator()() const { return isMobMod; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
  } // namespace MobPoolMods_

  struct MobPoolMods: sqlpp::table_t<MobPoolMods,
               MobPoolMods_::Poolid,
               MobPoolMods_::Modid,
               MobPoolMods_::Value,
               MobPoolMods_::IsMobMod>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_pool_mods";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobPoolMods;
        T& operator()() { return mobPoolMods; }
        const T& operator()() const { return mobPoolMods; }
      };
    };
  };
} // namespace xidb
#endif
