// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_DESPOIL_EFFECTS_H
#define XIDB_DESPOIL_EFFECTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace DespoilEffects_
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
    struct EffectId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "effectId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T effectId;
            T& operator()() { return effectId; }
            const T& operator()() const { return effectId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
  } // namespace DespoilEffects_

  struct DespoilEffects: sqlpp::table_t<DespoilEffects,
               DespoilEffects_::ItemId,
               DespoilEffects_::EffectId>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "despoil_effects";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T despoilEffects;
        T& operator()() { return despoilEffects; }
        const T& operator()() const { return despoilEffects; }
      };
    };
  };
} // namespace xidb
#endif
