// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_MOB_FAMILY_MODS_H
#define XIDB_MOB_FAMILY_MODS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace MobFamilyMods_
  {
    struct Familyid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "familyid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T familyid;
            T& operator()() { return familyid; }
            const T& operator()() const { return familyid; }
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
  } // namespace MobFamilyMods_

  struct MobFamilyMods: sqlpp::table_t<MobFamilyMods,
               MobFamilyMods_::Familyid,
               MobFamilyMods_::Modid,
               MobFamilyMods_::Value,
               MobFamilyMods_::IsMobMod>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "mob_family_mods";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T mobFamilyMods;
        T& operator()() { return mobFamilyMods; }
        const T& operator()() const { return mobFamilyMods; }
      };
    };
  };
} // namespace xidb
#endif