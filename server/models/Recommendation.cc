/**
 *
 *  Recommendation.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Recommendation.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::travelapp;

const std::string Recommendation::Cols::_rid = "rid";
const std::string Recommendation::Cols::_month = "month";
const std::string Recommendation::primaryKeyName = "rid";
const bool Recommendation::hasPrimaryKey = true;
const std::string Recommendation::tableName = "recommendation";

const std::vector<typename Recommendation::MetaData> Recommendation::metaData_={
{"rid","int32_t","integer",4,0,1,1},
{"month","int32_t","integer",4,0,0,1}
};
const std::string &Recommendation::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Recommendation::Recommendation(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>(r["rid"].as<int32_t>());
        }
        if(!r["month"].isNull())
        {
            month_=std::make_shared<int32_t>(r["month"].as<int32_t>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 2 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            rid_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            month_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
    }

}

Recommendation::Recommendation(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            month_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
}

Recommendation::Recommendation(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("rid"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson["rid"].asInt64());
        }
    }
    if(pJson.isMember("month"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["month"].isNull())
        {
            month_=std::make_shared<int32_t>((int32_t)pJson["month"].asInt64());
        }
    }
}

void Recommendation::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 2)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            month_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
}

void Recommendation::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("rid"))
    {
        if(!pJson["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson["rid"].asInt64());
        }
    }
    if(pJson.isMember("month"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["month"].isNull())
        {
            month_=std::make_shared<int32_t>((int32_t)pJson["month"].asInt64());
        }
    }
}

const int32_t &Recommendation::getValueOfRid() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(rid_)
        return *rid_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Recommendation::getRid() const noexcept
{
    return rid_;
}
void Recommendation::setRid(const int32_t &pRid) noexcept
{
    rid_ = std::make_shared<int32_t>(pRid);
    dirtyFlag_[0] = true;
}
const typename Recommendation::PrimaryKeyType & Recommendation::getPrimaryKey() const
{
    assert(rid_);
    return *rid_;
}

const int32_t &Recommendation::getValueOfMonth() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(month_)
        return *month_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Recommendation::getMonth() const noexcept
{
    return month_;
}
void Recommendation::setMonth(const int32_t &pMonth) noexcept
{
    month_ = std::make_shared<int32_t>(pMonth);
    dirtyFlag_[1] = true;
}

void Recommendation::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Recommendation::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "rid",
        "month"
    };
    return inCols;
}

void Recommendation::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getRid())
        {
            binder << getValueOfRid();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getMonth())
        {
            binder << getValueOfMonth();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> Recommendation::updateColumns() const
{
    std::vector<std::string> ret;
    if(dirtyFlag_[0])
    {
        ret.push_back(getColumnName(0));
    }
    if(dirtyFlag_[1])
    {
        ret.push_back(getColumnName(1));
    }
    return ret;
}

void Recommendation::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getRid())
        {
            binder << getValueOfRid();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getMonth())
        {
            binder << getValueOfMonth();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Recommendation::toJson() const
{
    Json::Value ret;
    if(getRid())
    {
        ret["rid"]=getValueOfRid();
    }
    else
    {
        ret["rid"]=Json::Value();
    }
    if(getMonth())
    {
        ret["month"]=getValueOfMonth();
    }
    else
    {
        ret["month"]=Json::Value();
    }
    return ret;
}

Json::Value Recommendation::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 2)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getRid())
            {
                ret[pMasqueradingVector[0]]=getValueOfRid();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getMonth())
            {
                ret[pMasqueradingVector[1]]=getValueOfMonth();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getRid())
    {
        ret["rid"]=getValueOfRid();
    }
    else
    {
        ret["rid"]=Json::Value();
    }
    if(getMonth())
    {
        ret["month"]=getValueOfMonth();
    }
    else
    {
        ret["month"]=Json::Value();
    }
    return ret;
}

bool Recommendation::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("rid"))
    {
        if(!validJsonOfField(0, "rid", pJson["rid"], err, true))
            return false;
    }
    else
    {
        err="The rid column cannot be null";
        return false;
    }
    if(pJson.isMember("month"))
    {
        if(!validJsonOfField(1, "month", pJson["month"], err, true))
            return false;
    }
    else
    {
        err="The month column cannot be null";
        return false;
    }
    return true;
}
bool Recommendation::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                        const std::vector<std::string> &pMasqueradingVector,
                                                        std::string &err)
{
    if(pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty())
      {
          if(pJson.isMember(pMasqueradingVector[0]))
          {
              if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[0] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[1].empty())
      {
          if(pJson.isMember(pMasqueradingVector[1]))
          {
              if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[1] + " column cannot be null";
            return false;
        }
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Recommendation::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("rid"))
    {
        if(!validJsonOfField(0, "rid", pJson["rid"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("month"))
    {
        if(!validJsonOfField(1, "month", pJson["month"], err, false))
            return false;
    }
    return true;
}
bool Recommendation::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                                      const std::vector<std::string> &pMasqueradingVector,
                                                      std::string &err)
{
    if(pMasqueradingVector.size() != 2)
    {
        err = "Bad masquerading vector";
        return false;
    }
    try {
      if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
      {
          if(!validJsonOfField(0, pMasqueradingVector[0], pJson[pMasqueradingVector[0]], err, false))
              return false;
      }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
      if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
      {
          if(!validJsonOfField(1, pMasqueradingVector[1], pJson[pMasqueradingVector[1]], err, false))
              return false;
      }
    }
    catch(const Json::LogicError &e)
    {
      err = e.what();
      return false;
    }
    return true;
}
bool Recommendation::validJsonOfField(size_t index,
                                      const std::string &fieldName,
                                      const Json::Value &pJson,
                                      std::string &err,
                                      bool isForCreation)
{
    switch(index)
    {
        case 0:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isInt())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        case 1:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isInt())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            break;
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
