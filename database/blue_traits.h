// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_BLUE_TRAITS_H
#define XIDB_BLUE_TRAITS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace BlueTraits_
  {
    struct TraitCategory
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "trait_category";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T traitCategory;
            T& operator()() { return traitCategory; }
            const T& operator()() const { return traitCategory; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct TraitPointsNeeded
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "trait_points_needed";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T traitPointsNeeded;
            T& operator()() { return traitPointsNeeded; }
            const T& operator()() const { return traitPointsNeeded; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Traitid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "traitid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T traitid;
            T& operator()() { return traitid; }
            const T& operator()() const { return traitid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Modifier
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modifier";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modifier;
            T& operator()() { return modifier; }
            const T& operator()() const { return modifier; }
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
      using _traits = sqlpp::make_traits<sqlpp::smallint, sqlpp::tag::can_be_null>;
    };
  } // namespace BlueTraits_

  struct BlueTraits: sqlpp::table_t<BlueTraits,
               BlueTraits_::TraitCategory,
               BlueTraits_::TraitPointsNeeded,
               BlueTraits_::Traitid,
               BlueTraits_::Modifier,
               BlueTraits_::Value>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "blue_traits";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T blueTraits;
        T& operator()() { return blueTraits; }
        const T& operator()() const { return blueTraits; }
      };
    };
  };
} // namespace xidb
#endif
