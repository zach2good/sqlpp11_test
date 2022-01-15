// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_PET_H
#define XIDB_CHAR_PET_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace CharPet_
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
    struct Wyvernid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "wyvernid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T wyvernid;
            T& operator()() { return wyvernid; }
            const T& operator()() const { return wyvernid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Automatonid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "automatonid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T automatonid;
            T& operator()() { return automatonid; }
            const T& operator()() const { return automatonid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct UnlockedAttachments
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "unlocked_attachments";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T unlockedAttachments;
            T& operator()() { return unlockedAttachments; }
            const T& operator()() const { return unlockedAttachments; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct EquippedAttachments
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "equipped_attachments";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T equippedAttachments;
            T& operator()() { return equippedAttachments; }
            const T& operator()() const { return equippedAttachments; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
    struct Adventuringfellowid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "adventuringfellowid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T adventuringfellowid;
            T& operator()() { return adventuringfellowid; }
            const T& operator()() const { return adventuringfellowid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Chocoboid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "chocoboid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T chocoboid;
            T& operator()() { return chocoboid; }
            const T& operator()() const { return chocoboid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct FieldChocobo
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "field_chocobo";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fieldChocobo;
            T& operator()() { return fieldChocobo; }
            const T& operator()() const { return fieldChocobo; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
  } // namespace CharPet_

  struct CharPet: sqlpp::table_t<CharPet,
               CharPet_::Charid,
               CharPet_::Wyvernid,
               CharPet_::Automatonid,
               CharPet_::UnlockedAttachments,
               CharPet_::EquippedAttachments,
               CharPet_::Adventuringfellowid,
               CharPet_::Chocoboid,
               CharPet_::FieldChocobo>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "char_pet";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T charPet;
        T& operator()() { return charPet; }
        const T& operator()() const { return charPet; }
      };
    };
  };
} // namespace xidb
#endif
