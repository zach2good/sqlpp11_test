// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_ZONELINES_H
#define XIDB_ZONELINES_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace Zonelines_
  {
    struct Zoneline
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "zoneline";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T zoneline;
            T& operator()() { return zoneline; }
            const T& operator()() const { return zoneline; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Fromzone
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "fromzone";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fromzone;
            T& operator()() { return fromzone; }
            const T& operator()() const { return fromzone; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Tozone
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "tozone";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T tozone;
            T& operator()() { return tozone; }
            const T& operator()() const { return tozone; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Tox
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "tox";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T tox;
            T& operator()() { return tox; }
            const T& operator()() const { return tox; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct Toy
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "toy";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T toy;
            T& operator()() { return toy; }
            const T& operator()() const { return toy; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct Toz
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "toz";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T toz;
            T& operator()() { return toz; }
            const T& operator()() const { return toz; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct Rotation
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rotation";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T rotation;
            T& operator()() { return rotation; }
            const T& operator()() const { return rotation; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
  } // namespace Zonelines_

  struct Zonelines: sqlpp::table_t<Zonelines,
               Zonelines_::Zoneline,
               Zonelines_::Fromzone,
               Zonelines_::Tozone,
               Zonelines_::Tox,
               Zonelines_::Toy,
               Zonelines_::Toz,
               Zonelines_::Rotation>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "zonelines";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T zonelines;
        T& operator()() { return zonelines; }
        const T& operator()() const { return zonelines; }
      };
    };
  };
} // namespace xidb
#endif
