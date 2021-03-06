// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_JOB_POINTS_H
#define XIDB_JOB_POINTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace JobPoints_
  {
    struct JobPointid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "job_pointid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jobPointid;
            T& operator()() { return jobPointid; }
            const T& operator()() const { return jobPointid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T name;
            T& operator()() { return name; }
            const T& operator()() const { return name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Upgrade
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "upgrade";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T upgrade;
            T& operator()() { return upgrade; }
            const T& operator()() const { return upgrade; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Jobs
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jobs";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jobs;
            T& operator()() { return jobs; }
            const T& operator()() const { return jobs; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
  } // namespace JobPoints_

  struct JobPoints: sqlpp::table_t<JobPoints,
               JobPoints_::JobPointid,
               JobPoints_::Name,
               JobPoints_::Upgrade,
               JobPoints_::Jobs>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "job_points";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T jobPoints;
        T& operator()() { return jobPoints; }
        const T& operator()() const { return jobPoints; }
      };
    };
  };
} // namespace xidb
#endif
