// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_ACCOUNTS_SESSIONS_H
#define XIDB_ACCOUNTS_SESSIONS_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace AccountsSessions_
  {
    struct Accid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "accid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T accid;
            T& operator()() { return accid; }
            const T& operator()() const { return accid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
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
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Targid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "targid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T targid;
            T& operator()() { return targid; }
            const T& operator()() const { return targid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Unitychat
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "unitychat";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T unitychat;
            T& operator()() { return unitychat; }
            const T& operator()() const { return unitychat; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Linkshellid1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "linkshellid1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T linkshellid1;
            T& operator()() { return linkshellid1; }
            const T& operator()() const { return linkshellid1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Linkshellrank1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "linkshellrank1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T linkshellrank1;
            T& operator()() { return linkshellrank1; }
            const T& operator()() const { return linkshellrank1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Linkshellid2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "linkshellid2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T linkshellid2;
            T& operator()() { return linkshellid2; }
            const T& operator()() const { return linkshellid2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Linkshellrank2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "linkshellrank2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T linkshellrank2;
            T& operator()() { return linkshellrank2; }
            const T& operator()() const { return linkshellrank2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct SessionKey
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "session_key";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sessionKey;
            T& operator()() { return sessionKey; }
            const T& operator()() const { return sessionKey; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob>;
    };
    struct ServerAddr
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "server_addr";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T serverAddr;
            T& operator()() { return serverAddr; }
            const T& operator()() const { return serverAddr; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct ServerPort
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "server_port";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T serverPort;
            T& operator()() { return serverPort; }
            const T& operator()() const { return serverPort; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct ClientAddr
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "client_addr";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T clientAddr;
            T& operator()() { return clientAddr; }
            const T& operator()() const { return clientAddr; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct ClientPort
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "client_port";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T clientPort;
            T& operator()() { return clientPort; }
            const T& operator()() const { return clientPort; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct VersionMismatch
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "version_mismatch";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T versionMismatch;
            T& operator()() { return versionMismatch; }
            const T& operator()() const { return versionMismatch; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct SeacomType
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "seacom_type";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T seacomType;
            T& operator()() { return seacomType; }
            const T& operator()() const { return seacomType; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct SeacomMessage
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "seacom_message";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T seacomMessage;
            T& operator()() { return seacomMessage; }
            const T& operator()() const { return seacomMessage; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::blob, sqlpp::tag::can_be_null>;
    };
  } // namespace AccountsSessions_

  struct AccountsSessions: sqlpp::table_t<AccountsSessions,
               AccountsSessions_::Accid,
               AccountsSessions_::Charid,
               AccountsSessions_::Targid,
               AccountsSessions_::Unitychat,
               AccountsSessions_::Linkshellid1,
               AccountsSessions_::Linkshellrank1,
               AccountsSessions_::Linkshellid2,
               AccountsSessions_::Linkshellrank2,
               AccountsSessions_::SessionKey,
               AccountsSessions_::ServerAddr,
               AccountsSessions_::ServerPort,
               AccountsSessions_::ClientAddr,
               AccountsSessions_::ClientPort,
               AccountsSessions_::VersionMismatch,
               AccountsSessions_::SeacomType,
               AccountsSessions_::SeacomMessage>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "accounts_sessions";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T accountsSessions;
        T& operator()() { return accountsSessions; }
        const T& operator()() const { return accountsSessions; }
      };
    };
  };
} // namespace xidb
#endif
