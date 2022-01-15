// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_AUDIT_GM_H
#define XIDB_AUDIT_GM_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace AuditGm_
  {
    struct DateTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "date_time";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dateTime;
            T& operator()() { return dateTime; }
            const T& operator()() const { return dateTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
    struct GmName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "gm_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T gmName;
            T& operator()() { return gmName; }
            const T& operator()() const { return gmName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Command
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "command";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T command;
            T& operator()() { return command; }
            const T& operator()() const { return command; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct FullString
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "full_string";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T fullString;
            T& operator()() { return fullString; }
            const T& operator()() const { return fullString; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
  } // namespace AuditGm_

  struct AuditGm: sqlpp::table_t<AuditGm,
               AuditGm_::DateTime,
               AuditGm_::GmName,
               AuditGm_::Command,
               AuditGm_::FullString>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "audit_gm";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T auditGm;
        T& operator()() { return auditGm; }
        const T& operator()() const { return auditGm; }
      };
    };
  };
} // namespace xidb
#endif
