// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_JOB_POINT_GIFTS_H
#define XIDB_JOB_POINT_GIFTS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace JobPointGifts_
  {
    struct Jobid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jobid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jobid;
            T& operator()() { return jobid; }
            const T& operator()() const { return jobid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint, sqlpp::tag::can_be_null>;
    };
    struct JpNeeded
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "jp_needed";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T jpNeeded;
            T& operator()() { return jpNeeded; }
            const T& operator()() const { return jpNeeded; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct Modid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "modid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T modid;
            T& operator()() { return modid; }
            const T& operator()() const { return modid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
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
      using _traits = sqlpp::make_traits<sqlpp::tinyint>;
    };
    struct Desc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "desc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T desc;
            T& operator()() { return desc; }
            const T& operator()() const { return desc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text>;
    };
  } // namespace JobPointGifts_

  struct JobPointGifts: sqlpp::table_t<JobPointGifts,
               JobPointGifts_::Jobid,
               JobPointGifts_::JpNeeded,
               JobPointGifts_::Modid,
               JobPointGifts_::Value,
               JobPointGifts_::Desc>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "job_point_gifts";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T jobPointGifts;
        T& operator()() { return jobPointGifts; }
        const T& operator()() const { return jobPointGifts; }
      };
    };
  };
} // namespace xidb
#endif