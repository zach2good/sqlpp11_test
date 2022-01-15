// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_LOOK_H
#define XIDB_CHAR_LOOK_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace CharLook_
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
    struct Face
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "face";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T face;
            T& operator()() { return face; }
            const T& operator()() const { return face; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Race
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "race";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T race;
            T& operator()() { return race; }
            const T& operator()() const { return race; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Size
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "size";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T size;
            T& operator()() { return size; }
            const T& operator()() const { return size; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Head
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "head";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T head;
            T& operator()() { return head; }
            const T& operator()() const { return head; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Body
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "body";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T body;
            T& operator()() { return body; }
            const T& operator()() const { return body; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Hands
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "hands";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T hands;
            T& operator()() { return hands; }
            const T& operator()() const { return hands; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Legs
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "legs";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T legs;
            T& operator()() { return legs; }
            const T& operator()() const { return legs; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Feet
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "feet";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T feet;
            T& operator()() { return feet; }
            const T& operator()() const { return feet; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Main
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "main";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T main;
            T& operator()() { return main; }
            const T& operator()() const { return main; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Sub
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sub";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sub;
            T& operator()() { return sub; }
            const T& operator()() const { return sub; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Ranged
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ranged";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ranged;
            T& operator()() { return ranged; }
            const T& operator()() const { return ranged; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
  } // namespace CharLook_

  struct CharLook: sqlpp::table_t<CharLook,
               CharLook_::Charid,
               CharLook_::Face,
               CharLook_::Race,
               CharLook_::Size,
               CharLook_::Head,
               CharLook_::Body,
               CharLook_::Hands,
               CharLook_::Legs,
               CharLook_::Feet,
               CharLook_::Main,
               CharLook_::Sub,
               CharLook_::Ranged>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_look";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T charLook;
        T& operator()() { return charLook; }
        const T& operator()() const { return charLook; }
      };
    };
  };
} // namespace xidb
#endif