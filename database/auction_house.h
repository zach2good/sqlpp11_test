// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_AUCTION_HOUSE_H
#define XIDB_AUCTION_HOUSE_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace AuctionHouse_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T id;
            T& operator()() { return id; }
            const T& operator()() const { return id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::require_insert>;
    };
    struct Itemid
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "itemid";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T itemid;
            T& operator()() { return itemid; }
            const T& operator()() const { return itemid; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Stack
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "stack";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T stack;
            T& operator()() { return stack; }
            const T& operator()() const { return stack; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Seller
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "seller";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T seller;
            T& operator()() { return seller; }
            const T& operator()() const { return seller; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct SellerName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "seller_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sellerName;
            T& operator()() { return sellerName; }
            const T& operator()() const { return sellerName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Date
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "date";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T date;
            T& operator()() { return date; }
            const T& operator()() const { return date; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct Price
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "price";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T price;
            T& operator()() { return price; }
            const T& operator()() const { return price; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct BuyerName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "buyer_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T buyerName;
            T& operator()() { return buyerName; }
            const T& operator()() const { return buyerName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct Sale
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sale";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sale;
            T& operator()() { return sale; }
            const T& operator()() const { return sale; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
    struct SellDate
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "sell_date";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T sellDate;
            T& operator()() { return sellDate; }
            const T& operator()() const { return sellDate; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
    };
  } // namespace AuctionHouse_

  struct AuctionHouse: sqlpp::table_t<AuctionHouse,
               AuctionHouse_::Id,
               AuctionHouse_::Itemid,
               AuctionHouse_::Stack,
               AuctionHouse_::Seller,
               AuctionHouse_::SellerName,
               AuctionHouse_::Date,
               AuctionHouse_::Price,
               AuctionHouse_::BuyerName,
               AuctionHouse_::Sale,
               AuctionHouse_::SellDate>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "auction_house";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T auctionHouse;
        T& operator()() { return auctionHouse; }
        const T& operator()() const { return auctionHouse; }
      };
    };
  };
} // namespace xidb
#endif
