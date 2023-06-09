/**
 *
 *  Traveler.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Traveler.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::travelapp;

const std::string Traveler::Cols::_uid = "uid";
const std::string Traveler::Cols::_uname = "uname";
const std::string Traveler::Cols::_upic = "upic";
const std::string Traveler::Cols::_pwd = "pwd";
const std::string Traveler::primaryKeyName = "uid";
const bool Traveler::hasPrimaryKey = true;
const std::string Traveler::tableName = "traveler";

const std::vector<typename Traveler::MetaData> Traveler::metaData_={
{"uid","int32_t","integer",4,0,1,1},
{"uname","std::string","character varying",255,0,0,1},
{"upic","std::string","character varying",255,0,0,1},
{"pwd","std::string","character varying",255,0,0,1}
};
const std::string &Traveler::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Traveler::Traveler(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["uid"].isNull())
        {
            uid_=std::make_shared<int32_t>(r["uid"].as<int32_t>());
        }
        if(!r["uname"].isNull())
        {
            uname_=std::make_shared<std::string>(r["uname"].as<std::string>());
        }
        if(!r["upic"].isNull())
        {
            upic_=std::make_shared<std::string>(r["upic"].as<std::string>());
        }
        if(!r["pwd"].isNull())
        {
            pwd_=std::make_shared<std::string>(r["pwd"].as<std::string>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 4 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            uid_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            uname_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            upic_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 3;
        if(!r[index].isNull())
        {
            pwd_=std::make_shared<std::string>(r[index].as<std::string>());
        }
    }

}

Traveler::Traveler(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 4)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            uid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            uname_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            upic_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            pwd_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
}

Traveler::Traveler(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("uid"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["uid"].isNull())
        {
            uid_=std::make_shared<int32_t>((int32_t)pJson["uid"].asInt64());
        }
    }
    if(pJson.isMember("uname"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["uname"].isNull())
        {
            uname_=std::make_shared<std::string>(pJson["uname"].asString());
        }
    }
    if(pJson.isMember("upic"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["upic"].isNull())
        {
            upic_=std::make_shared<std::string>(pJson["upic"].asString());
        }
    }
    if(pJson.isMember("pwd"))
    {
        dirtyFlag_[3]=true;
        if(!pJson["pwd"].isNull())
        {
            pwd_=std::make_shared<std::string>(pJson["pwd"].asString());
        }
    }
}

void Traveler::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 4)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            uid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            uname_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            upic_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            pwd_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
}

void Traveler::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("uid"))
    {
        if(!pJson["uid"].isNull())
        {
            uid_=std::make_shared<int32_t>((int32_t)pJson["uid"].asInt64());
        }
    }
    if(pJson.isMember("uname"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["uname"].isNull())
        {
            uname_=std::make_shared<std::string>(pJson["uname"].asString());
        }
    }
    if(pJson.isMember("upic"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["upic"].isNull())
        {
            upic_=std::make_shared<std::string>(pJson["upic"].asString());
        }
    }
    if(pJson.isMember("pwd"))
    {
        dirtyFlag_[3] = true;
        if(!pJson["pwd"].isNull())
        {
            pwd_=std::make_shared<std::string>(pJson["pwd"].asString());
        }
    }
}

const int32_t &Traveler::getValueOfUid() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(uid_)
        return *uid_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Traveler::getUid() const noexcept
{
    return uid_;
}
void Traveler::setUid(const int32_t &pUid) noexcept
{
    uid_ = std::make_shared<int32_t>(pUid);
    dirtyFlag_[0] = true;
}
const typename Traveler::PrimaryKeyType & Traveler::getPrimaryKey() const
{
    assert(uid_);
    return *uid_;
}

const std::string &Traveler::getValueOfUname() const noexcept
{
    const static std::string defaultValue = std::string();
    if(uname_)
        return *uname_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Traveler::getUname() const noexcept
{
    return uname_;
}
void Traveler::setUname(const std::string &pUname) noexcept
{
    uname_ = std::make_shared<std::string>(pUname);
    dirtyFlag_[1] = true;
}
void Traveler::setUname(std::string &&pUname) noexcept
{
    uname_ = std::make_shared<std::string>(std::move(pUname));
    dirtyFlag_[1] = true;
}

const std::string &Traveler::getValueOfUpic() const noexcept
{
    const static std::string defaultValue = std::string();
    if(upic_)
        return *upic_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Traveler::getUpic() const noexcept
{
    return upic_;
}
void Traveler::setUpic(const std::string &pUpic) noexcept
{
    upic_ = std::make_shared<std::string>(pUpic);
    dirtyFlag_[2] = true;
}
void Traveler::setUpic(std::string &&pUpic) noexcept
{
    upic_ = std::make_shared<std::string>(std::move(pUpic));
    dirtyFlag_[2] = true;
}

const std::string &Traveler::getValueOfPwd() const noexcept
{
    const static std::string defaultValue = std::string();
    if(pwd_)
        return *pwd_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Traveler::getPwd() const noexcept
{
    return pwd_;
}
void Traveler::setPwd(const std::string &pPwd) noexcept
{
    pwd_ = std::make_shared<std::string>(pPwd);
    dirtyFlag_[3] = true;
}
void Traveler::setPwd(std::string &&pPwd) noexcept
{
    pwd_ = std::make_shared<std::string>(std::move(pPwd));
    dirtyFlag_[3] = true;
}

void Traveler::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Traveler::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "uid",
        "uname",
        "upic",
        "pwd"
    };
    return inCols;
}

void Traveler::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getUid())
        {
            binder << getValueOfUid();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getUname())
        {
            binder << getValueOfUname();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getUpic())
        {
            binder << getValueOfUpic();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getPwd())
        {
            binder << getValueOfPwd();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> Traveler::updateColumns() const
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
    if(dirtyFlag_[2])
    {
        ret.push_back(getColumnName(2));
    }
    if(dirtyFlag_[3])
    {
        ret.push_back(getColumnName(3));
    }
    return ret;
}

void Traveler::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getUid())
        {
            binder << getValueOfUid();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
    {
        if(getUname())
        {
            binder << getValueOfUname();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getUpic())
        {
            binder << getValueOfUpic();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getPwd())
        {
            binder << getValueOfPwd();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Traveler::toJson() const
{
    Json::Value ret;
    if(getUid())
    {
        ret["uid"]=getValueOfUid();
    }
    else
    {
        ret["uid"]=Json::Value();
    }
    if(getUname())
    {
        ret["uname"]=getValueOfUname();
    }
    else
    {
        ret["uname"]=Json::Value();
    }
    if(getUpic())
    {
        ret["upic"]=getValueOfUpic();
    }
    else
    {
        ret["upic"]=Json::Value();
    }
    if(getPwd())
    {
        ret["pwd"]=getValueOfPwd();
    }
    else
    {
        ret["pwd"]=Json::Value();
    }
    return ret;
}

Json::Value Traveler::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 4)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getUid())
            {
                ret[pMasqueradingVector[0]]=getValueOfUid();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getUname())
            {
                ret[pMasqueradingVector[1]]=getValueOfUname();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getUpic())
            {
                ret[pMasqueradingVector[2]]=getValueOfUpic();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[3].empty())
        {
            if(getPwd())
            {
                ret[pMasqueradingVector[3]]=getValueOfPwd();
            }
            else
            {
                ret[pMasqueradingVector[3]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getUid())
    {
        ret["uid"]=getValueOfUid();
    }
    else
    {
        ret["uid"]=Json::Value();
    }
    if(getUname())
    {
        ret["uname"]=getValueOfUname();
    }
    else
    {
        ret["uname"]=Json::Value();
    }
    if(getUpic())
    {
        ret["upic"]=getValueOfUpic();
    }
    else
    {
        ret["upic"]=Json::Value();
    }
    if(getPwd())
    {
        ret["pwd"]=getValueOfPwd();
    }
    else
    {
        ret["pwd"]=Json::Value();
    }
    return ret;
}

bool Traveler::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("uid"))
    {
        if(!validJsonOfField(0, "uid", pJson["uid"], err, true))
            return false;
    }
    else
    {
        err="The uid column cannot be null";
        return false;
    }
    if(pJson.isMember("uname"))
    {
        if(!validJsonOfField(1, "uname", pJson["uname"], err, true))
            return false;
    }
    else
    {
        err="The uname column cannot be null";
        return false;
    }
    if(pJson.isMember("upic"))
    {
        if(!validJsonOfField(2, "upic", pJson["upic"], err, true))
            return false;
    }
    else
    {
        err="The upic column cannot be null";
        return false;
    }
    if(pJson.isMember("pwd"))
    {
        if(!validJsonOfField(3, "pwd", pJson["pwd"], err, true))
            return false;
    }
    else
    {
        err="The pwd column cannot be null";
        return false;
    }
    return true;
}
bool Traveler::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                  const std::vector<std::string> &pMasqueradingVector,
                                                  std::string &err)
{
    if(pMasqueradingVector.size() != 4)
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
      if(!pMasqueradingVector[2].empty())
      {
          if(pJson.isMember(pMasqueradingVector[2]))
          {
              if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[2] + " column cannot be null";
            return false;
        }
      }
      if(!pMasqueradingVector[3].empty())
      {
          if(pJson.isMember(pMasqueradingVector[3]))
          {
              if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[3] + " column cannot be null";
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
bool Traveler::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("uid"))
    {
        if(!validJsonOfField(0, "uid", pJson["uid"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("uname"))
    {
        if(!validJsonOfField(1, "uname", pJson["uname"], err, false))
            return false;
    }
    if(pJson.isMember("upic"))
    {
        if(!validJsonOfField(2, "upic", pJson["upic"], err, false))
            return false;
    }
    if(pJson.isMember("pwd"))
    {
        if(!validJsonOfField(3, "pwd", pJson["pwd"], err, false))
            return false;
    }
    return true;
}
bool Traveler::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                std::string &err)
{
    if(pMasqueradingVector.size() != 4)
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
      if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
      {
          if(!validJsonOfField(2, pMasqueradingVector[2], pJson[pMasqueradingVector[2]], err, false))
              return false;
      }
      if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
      {
          if(!validJsonOfField(3, pMasqueradingVector[3], pJson[pMasqueradingVector[3]], err, false))
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
bool Traveler::validJsonOfField(size_t index,
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
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 255)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 255)";
                return false;
            }

            break;
        case 2:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 255)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 255)";
                return false;
            }

            break;
        case 3:
            if(pJson.isNull())
            {
                err="The " + fieldName + " column cannot be null";
                return false;
            }
            if(!pJson.isString())
            {
                err="Type error in the "+fieldName+" field";
                return false;
            }
            // asString().length() creates a string object, is there any better way to validate the length?
            if(pJson.isString() && pJson.asString().length() > 255)
            {
                err="String length exceeds limit for the " +
                    fieldName +
                    " field (the maximum value is 255)";
                return false;
            }

            break;
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
