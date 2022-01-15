// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_ITEM_MODS_H
#define XIDB_ITEM_MODS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace ItemMods_
  {
    struct ItemId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemId;
            T& operator()() { return itemId; }
            const T& operator()() const { return itemId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct ModId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modId;
            T& operator()() { return modId; }
            const T& operator()() const { return modId; }
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
  } // namespace ItemMods_

  struct ItemMods: sqlpp::table_t<ItemMods,
               ItemMods_::ItemId,
               ItemMods_::ModId,
               ItemMods_::Value>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "item_mods";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T itemMods;
        T& operator()() { return itemMods; }
        const T& operator()() const { return itemMods; }
      };
    };
  };
} // namespace xidb
#endif
