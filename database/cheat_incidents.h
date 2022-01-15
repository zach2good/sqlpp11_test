// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_CHEAT_INCIDENTS_H
#define XIDB_CHEAT_INCIDENTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace CheatIncidents_
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
    struct IncidentTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "incident_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T incidentTime;
            T& operator()() { return incidentTime; }
            const T& operator()() const { return incidentTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point>;
    };
    struct Cheatid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "cheatid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T cheatid;
            T& operator()() { return cheatid; }
            const T& operator()() const { return cheatid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Cheatarg
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "cheatarg";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T cheatarg;
            T& operator()() { return cheatarg; }
            const T& operator()() const { return cheatarg; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Description
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "description";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T description;
            T& operator()() { return description; }
            const T& operator()() const { return description; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
  } // namespace CheatIncidents_

  struct CheatIncidents: sqlpp::table_t<CheatIncidents,
               CheatIncidents_::Charid,
               CheatIncidents_::IncidentTime,
               CheatIncidents_::Cheatid,
               CheatIncidents_::Cheatarg,
               CheatIncidents_::Description>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "cheat_incidents";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T cheatIncidents;
        T& operator()() { return cheatIncidents; }
        const T& operator()() const { return cheatIncidents; }
      };
    };
  };
} // namespace xidb
#endif