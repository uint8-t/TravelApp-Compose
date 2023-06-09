/**
 *
 *  Region.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Region.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::travelapp;

const std::string Region::Cols::_rid = "rid";
const std::string Region::Cols::_rname = "rname";
const std::string Region::Cols::_intro = "intro";
const std::string Region::Cols::_pic = "pic";
const std::string Region::Cols::_view = "view";
const std::string Region::primaryKeyName = "rid";
const bool Region::hasPrimaryKey = true;
const std::string Region::tableName = "region";

const std::vector<typename Region::MetaData> Region::metaData_={
{"rid","int32_t","integer",4,0,1,1},
{"rname","std::string","character varying",255,0,0,1},
{"intro","std::string","text",0,0,0,1},
{"pic","std::string","character varying",255,0,0,1},
{"view","int32_t","integer",4,0,0,1}
};
const std::string &Region::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Region::Region(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>(r["rid"].as<int32_t>());
        }
        if(!r["rname"].isNull())
        {
            rname_=std::make_shared<std::string>(r["rname"].as<std::string>());
        }
        if(!r["intro"].isNull())
        {
            intro_=std::make_shared<std::string>(r["intro"].as<std::string>());
        }
        if(!r["pic"].isNull())
        {
            pic_=std::make_shared<std::string>(r["pic"].as<std::string>());
        }
        if(!r["view"].isNull())
        {
            view_=std::make_shared<int32_t>(r["view"].as<int32_t>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 5 > r.size())
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
            rname_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            intro_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 3;
        if(!r[index].isNull())
        {
            pic_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 4;
        if(!r[index].isNull())
        {
            view_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
    }

}

Region::Region(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 5)
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
            rname_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            intro_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            pic_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            view_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[4]].asInt64());
        }
    }
}

Region::Region(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("rid"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson["rid"].asInt64());
        }
    }
    if(pJson.isMember("rname"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["rname"].isNull())
        {
            rname_=std::make_shared<std::string>(pJson["rname"].asString());
        }
    }
    if(pJson.isMember("intro"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["intro"].isNull())
        {
            intro_=std::make_shared<std::string>(pJson["intro"].asString());
        }
    }
    if(pJson.isMember("pic"))
    {
        dirtyFlag_[3]=true;
        if(!pJson["pic"].isNull())
        {
            pic_=std::make_shared<std::string>(pJson["pic"].asString());
        }
    }
    if(pJson.isMember("view"))
    {
        dirtyFlag_[4]=true;
        if(!pJson["view"].isNull())
        {
            view_=std::make_shared<int32_t>((int32_t)pJson["view"].asInt64());
        }
    }
}

void Region::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 5)
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
            rname_=std::make_shared<std::string>(pJson[pMasqueradingVector[1]].asString());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            intro_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            pic_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            view_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[4]].asInt64());
        }
    }
}

void Region::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("rid"))
    {
        if(!pJson["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson["rid"].asInt64());
        }
    }
    if(pJson.isMember("rname"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["rname"].isNull())
        {
            rname_=std::make_shared<std::string>(pJson["rname"].asString());
        }
    }
    if(pJson.isMember("intro"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["intro"].isNull())
        {
            intro_=std::make_shared<std::string>(pJson["intro"].asString());
        }
    }
    if(pJson.isMember("pic"))
    {
        dirtyFlag_[3] = true;
        if(!pJson["pic"].isNull())
        {
            pic_=std::make_shared<std::string>(pJson["pic"].asString());
        }
    }
    if(pJson.isMember("view"))
    {
        dirtyFlag_[4] = true;
        if(!pJson["view"].isNull())
        {
            view_=std::make_shared<int32_t>((int32_t)pJson["view"].asInt64());
        }
    }
}

const int32_t &Region::getValueOfRid() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(rid_)
        return *rid_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Region::getRid() const noexcept
{
    return rid_;
}
void Region::setRid(const int32_t &pRid) noexcept
{
    rid_ = std::make_shared<int32_t>(pRid);
    dirtyFlag_[0] = true;
}
const typename Region::PrimaryKeyType & Region::getPrimaryKey() const
{
    assert(rid_);
    return *rid_;
}

const std::string &Region::getValueOfRname() const noexcept
{
    const static std::string defaultValue = std::string();
    if(rname_)
        return *rname_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Region::getRname() const noexcept
{
    return rname_;
}
void Region::setRname(const std::string &pRname) noexcept
{
    rname_ = std::make_shared<std::string>(pRname);
    dirtyFlag_[1] = true;
}
void Region::setRname(std::string &&pRname) noexcept
{
    rname_ = std::make_shared<std::string>(std::move(pRname));
    dirtyFlag_[1] = true;
}

const std::string &Region::getValueOfIntro() const noexcept
{
    const static std::string defaultValue = std::string();
    if(intro_)
        return *intro_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Region::getIntro() const noexcept
{
    return intro_;
}
void Region::setIntro(const std::string &pIntro) noexcept
{
    intro_ = std::make_shared<std::string>(pIntro);
    dirtyFlag_[2] = true;
}
void Region::setIntro(std::string &&pIntro) noexcept
{
    intro_ = std::make_shared<std::string>(std::move(pIntro));
    dirtyFlag_[2] = true;
}

const std::string &Region::getValueOfPic() const noexcept
{
    const static std::string defaultValue = std::string();
    if(pic_)
        return *pic_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Region::getPic() const noexcept
{
    return pic_;
}
void Region::setPic(const std::string &pPic) noexcept
{
    pic_ = std::make_shared<std::string>(pPic);
    dirtyFlag_[3] = true;
}
void Region::setPic(std::string &&pPic) noexcept
{
    pic_ = std::make_shared<std::string>(std::move(pPic));
    dirtyFlag_[3] = true;
}

const int32_t &Region::getValueOfView() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(view_)
        return *view_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Region::getView() const noexcept
{
    return view_;
}
void Region::setView(const int32_t &pView) noexcept
{
    view_ = std::make_shared<int32_t>(pView);
    dirtyFlag_[4] = true;
}

void Region::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Region::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "rid",
        "rname",
        "intro",
        "pic",
        "view"
    };
    return inCols;
}

void Region::outputArgs(drogon::orm::internal::SqlBinder &binder) const
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
        if(getRname())
        {
            binder << getValueOfRname();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getIntro())
        {
            binder << getValueOfIntro();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getPic())
        {
            binder << getValueOfPic();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[4])
    {
        if(getView())
        {
            binder << getValueOfView();
        }
        else
        {
            binder << nullptr;
        }
    }
}

const std::vector<std::string> Region::updateColumns() const
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
    if(dirtyFlag_[4])
    {
        ret.push_back(getColumnName(4));
    }
    return ret;
}

void Region::updateArgs(drogon::orm::internal::SqlBinder &binder) const
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
        if(getRname())
        {
            binder << getValueOfRname();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[2])
    {
        if(getIntro())
        {
            binder << getValueOfIntro();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
    {
        if(getPic())
        {
            binder << getValueOfPic();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[4])
    {
        if(getView())
        {
            binder << getValueOfView();
        }
        else
        {
            binder << nullptr;
        }
    }
}
Json::Value Region::toJson() const
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
    if(getRname())
    {
        ret["rname"]=getValueOfRname();
    }
    else
    {
        ret["rname"]=Json::Value();
    }
    if(getIntro())
    {
        ret["intro"]=getValueOfIntro();
    }
    else
    {
        ret["intro"]=Json::Value();
    }
    if(getPic())
    {
        ret["pic"]=getValueOfPic();
    }
    else
    {
        ret["pic"]=Json::Value();
    }
    if(getView())
    {
        ret["view"]=getValueOfView();
    }
    else
    {
        ret["view"]=Json::Value();
    }
    return ret;
}

Json::Value Region::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 5)
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
            if(getRname())
            {
                ret[pMasqueradingVector[1]]=getValueOfRname();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getIntro())
            {
                ret[pMasqueradingVector[2]]=getValueOfIntro();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[3].empty())
        {
            if(getPic())
            {
                ret[pMasqueradingVector[3]]=getValueOfPic();
            }
            else
            {
                ret[pMasqueradingVector[3]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[4].empty())
        {
            if(getView())
            {
                ret[pMasqueradingVector[4]]=getValueOfView();
            }
            else
            {
                ret[pMasqueradingVector[4]]=Json::Value();
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
    if(getRname())
    {
        ret["rname"]=getValueOfRname();
    }
    else
    {
        ret["rname"]=Json::Value();
    }
    if(getIntro())
    {
        ret["intro"]=getValueOfIntro();
    }
    else
    {
        ret["intro"]=Json::Value();
    }
    if(getPic())
    {
        ret["pic"]=getValueOfPic();
    }
    else
    {
        ret["pic"]=Json::Value();
    }
    if(getView())
    {
        ret["view"]=getValueOfView();
    }
    else
    {
        ret["view"]=Json::Value();
    }
    return ret;
}

bool Region::validateJsonForCreation(const Json::Value &pJson, std::string &err)
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
    if(pJson.isMember("rname"))
    {
        if(!validJsonOfField(1, "rname", pJson["rname"], err, true))
            return false;
    }
    else
    {
        err="The rname column cannot be null";
        return false;
    }
    if(pJson.isMember("intro"))
    {
        if(!validJsonOfField(2, "intro", pJson["intro"], err, true))
            return false;
    }
    else
    {
        err="The intro column cannot be null";
        return false;
    }
    if(pJson.isMember("pic"))
    {
        if(!validJsonOfField(3, "pic", pJson["pic"], err, true))
            return false;
    }
    else
    {
        err="The pic column cannot be null";
        return false;
    }
    if(pJson.isMember("view"))
    {
        if(!validJsonOfField(4, "view", pJson["view"], err, true))
            return false;
    }
    else
    {
        err="The view column cannot be null";
        return false;
    }
    return true;
}
bool Region::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                                const std::vector<std::string> &pMasqueradingVector,
                                                std::string &err)
{
    if(pMasqueradingVector.size() != 5)
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
      if(!pMasqueradingVector[4].empty())
      {
          if(pJson.isMember(pMasqueradingVector[4]))
          {
              if(!validJsonOfField(4, pMasqueradingVector[4], pJson[pMasqueradingVector[4]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[4] + " column cannot be null";
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
bool Region::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
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
    if(pJson.isMember("rname"))
    {
        if(!validJsonOfField(1, "rname", pJson["rname"], err, false))
            return false;
    }
    if(pJson.isMember("intro"))
    {
        if(!validJsonOfField(2, "intro", pJson["intro"], err, false))
            return false;
    }
    if(pJson.isMember("pic"))
    {
        if(!validJsonOfField(3, "pic", pJson["pic"], err, false))
            return false;
    }
    if(pJson.isMember("view"))
    {
        if(!validJsonOfField(4, "view", pJson["view"], err, false))
            return false;
    }
    return true;
}
bool Region::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                              const std::vector<std::string> &pMasqueradingVector,
                                              std::string &err)
{
    if(pMasqueradingVector.size() != 5)
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
      if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
      {
          if(!validJsonOfField(4, pMasqueradingVector[4], pJson[pMasqueradingVector[4]], err, false))
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
bool Region::validJsonOfField(size_t index,
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
        case 4:
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
