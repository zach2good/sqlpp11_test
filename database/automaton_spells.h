// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_AUTOMATON_SPELLS_H
#define XIDB_AUTOMATON_SPELLS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace AutomatonSpells_
  {
    struct Spellid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "spellid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T spellid;
            T& operator()() { return spellid; }
            const T& operator()() const { return spellid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Skilllevel
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "skilllevel";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T skilllevel;
            T& operator()() { return skilllevel; }
            const T& operator()() const { return skilllevel; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Heads
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "heads";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T heads;
            T& operator()() { return heads; }
            const T& operator()() const { return heads; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Enfeeble
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "enfeeble";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T enfeeble;
            T& operator()() { return enfeeble; }
            const T& operator()() const { return enfeeble; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Immunity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "immunity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T immunity;
            T& operator()() { return immunity; }
            const T& operator()() const { return immunity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Removes
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "removes";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T removes;
            T& operator()() { return removes; }
            const T& operator()() const { return removes; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
  } // namespace AutomatonSpells_

  struct AutomatonSpells: sqlpp::table_t<AutomatonSpells,
               AutomatonSpells_::Spellid,
               AutomatonSpells_::Skilllevel,
               AutomatonSpells_::Heads,
               AutomatonSpells_::Enfeeble,
               AutomatonSpells_::Immunity,
               AutomatonSpells_::Removes>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "automaton_spells";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T automatonSpells;
        T& operator()() { return automatonSpells; }
        const T& operator()() const { return automatonSpells; }
      };
    };
  };
} // namespace xidb
#endif
