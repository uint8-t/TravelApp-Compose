/**
 *
 *  NoteDetail.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#ifdef __cpp_impl_coroutine
#include <drogon/orm/CoroMapper.h>
#endif
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

namespace drogon
{
namespace orm
{
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}
}
namespace drogon_model
{
namespace travelapp
{

class NoteDetail
{
  public:
    struct Cols
    {
        static const std::string _nid;
        static const std::string _background;
        static const std::string _uid;
        static const std::string _time;
        static const std::string _title;
        static const std::string _content;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    using PrimaryKeyType = int32_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column names,
     * otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select all
     * columns by an asterisk), please set the offset to -1.
     */
    explicit NoteDetail(const drogon::orm::Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit NoteDetail(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    NoteDetail(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    NoteDetail() = default;

    void updateByJson(const Json::Value &pJson) noexcept(false);
    void updateByMasqueradedJson(const Json::Value &pJson,
                                 const std::vector<std::string> &pMasqueradingVector) noexcept(false);
    static bool validateJsonForCreation(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForCreation(const Json::Value &,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                    std::string &err);
    static bool validateJsonForUpdate(const Json::Value &pJson, std::string &err);
    static bool validateMasqueradedJsonForUpdate(const Json::Value &,
                                          const std::vector<std::string> &pMasqueradingVector,
                                          std::string &err);
    static bool validJsonOfField(size_t index,
                          const std::string &fieldName,
                          const Json::Value &pJson,
                          std::string &err,
                          bool isForCreation);

    /**  For column nid  */
    ///Get the value of the column nid, returns the default value if the column is null
    const int32_t &getValueOfNid() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getNid() const noexcept;
    ///Set the value of the column nid
    void setNid(const int32_t &pNid) noexcept;

    /**  For column background  */
    ///Get the value of the column background, returns the default value if the column is null
    const std::string &getValueOfBackground() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getBackground() const noexcept;
    ///Set the value of the column background
    void setBackground(const std::string &pBackground) noexcept;
    void setBackground(std::string &&pBackground) noexcept;

    /**  For column uid  */
    ///Get the value of the column uid, returns the default value if the column is null
    const int32_t &getValueOfUid() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getUid() const noexcept;
    ///Set the value of the column uid
    void setUid(const int32_t &pUid) noexcept;

    /**  For column time  */
    ///Get the value of the column time, returns the default value if the column is null
    const ::trantor::Date &getValueOfTime() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<::trantor::Date> &getTime() const noexcept;
    ///Set the value of the column time
    void setTime(const ::trantor::Date &pTime) noexcept;

    /**  For column title  */
    ///Get the value of the column title, returns the default value if the column is null
    const std::string &getValueOfTitle() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getTitle() const noexcept;
    ///Set the value of the column title
    void setTitle(const std::string &pTitle) noexcept;
    void setTitle(std::string &&pTitle) noexcept;

    /**  For column content  */
    ///Get the value of the column content, returns the default value if the column is null
    const std::string &getValueOfContent() const noexcept;
    ///Return a shared_ptr object pointing to the column const value, or an empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getContent() const noexcept;
    ///Set the value of the column content
    void setContent(const std::string &pContent) noexcept;
    void setContent(std::string &&pContent) noexcept;


    static size_t getColumnNumber() noexcept {  return 6;  }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend drogon::orm::Mapper<NoteDetail>;
#ifdef __cpp_impl_coroutine
    friend drogon::orm::CoroMapper<NoteDetail>;
#endif
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    ///For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<int32_t> nid_;
    std::shared_ptr<std::string> background_;
    std::shared_ptr<int32_t> uid_;
    std::shared_ptr<::trantor::Date> time_;
    std::shared_ptr<std::string> title_;
    std::shared_ptr<std::string> content_;
    struct MetaData
    {
        const std::string colName_;
        const std::string colType_;
        const std::string colDatabaseType_;
        const ssize_t colLength_;
        const bool isAutoVal_;
        const bool isPrimaryKey_;
        const bool notNull_;
    };
    static const std::vector<MetaData> metaData_;
    bool dirtyFlag_[6]={ false };
  public:
    static const std::string &sqlForFindingByPrimaryKey()
    {
        static const std::string sql="select * from " + tableName + " where nid = $1";
        return sql;
    }

    static const std::string &sqlForDeletingByPrimaryKey()
    {
        static const std::string sql="delete from " + tableName + " where nid = $1";
        return sql;
    }
    std::string sqlForInserting(bool &needSelection) const
    {
        std::string sql="insert into " + tableName + " (";
        size_t parametersCount = 0;
        needSelection = false;
        if(dirtyFlag_[0])
        {
            sql += "nid,";
            ++parametersCount;
        }
        if(dirtyFlag_[1])
        {
            sql += "background,";
            ++parametersCount;
        }
        if(dirtyFlag_[2])
        {
            sql += "uid,";
            ++parametersCount;
        }
        if(dirtyFlag_[3])
        {
            sql += "time,";
            ++parametersCount;
        }
        if(dirtyFlag_[4])
        {
            sql += "title,";
            ++parametersCount;
        }
        if(dirtyFlag_[5])
        {
            sql += "content,";
            ++parametersCount;
        }
        if(parametersCount > 0)
        {
            sql[sql.length()-1]=')';
            sql += " values (";
        }
        else
            sql += ") values (";

        int placeholder=1;
        char placeholderStr[64];
        size_t n=0;
        if(dirtyFlag_[0])
        {
            n = sprintf(placeholderStr,"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[1])
        {
            n = sprintf(placeholderStr,"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[2])
        {
            n = sprintf(placeholderStr,"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[3])
        {
            n = sprintf(placeholderStr,"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[4])
        {
            n = sprintf(placeholderStr,"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(dirtyFlag_[5])
        {
            n = sprintf(placeholderStr,"$%d,",placeholder++);
            sql.append(placeholderStr, n);
        }
        if(parametersCount > 0)
        {
            sql.resize(sql.length() - 1);
        }
        if(needSelection)
        {
            sql.append(") returning *");
        }
        else
        {
            sql.append(1, ')');
        }
        LOG_TRACE << sql;
        return sql;
    }
};
} // namespace travelapp
} // namespace drogon_model
