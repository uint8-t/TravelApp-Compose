/**
 *
 *  Spot.cc
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#include "Spot.h"
#include <drogon/utils/Utilities.h>
#include <string>

using namespace drogon;
using namespace drogon::orm;
using namespace drogon_model::travelapp;

const std::string Spot::Cols::_sid = "sid";
const std::string Spot::Cols::_rid = "rid";
const std::string Spot::Cols::_sname = "sname";
const std::string Spot::Cols::_rname = "rname";
const std::string Spot::Cols::_pic = "pic";
const std::string Spot::Cols::_intro = "intro";
const std::string Spot::primaryKeyName = "sid";
const bool Spot::hasPrimaryKey = true;
const std::string Spot::tableName = "spot";

const std::vector<typename Spot::MetaData> Spot::metaData_={
{"sid","int32_t","integer",4,0,1,1},
{"rid","int32_t","integer",4,0,0,1},
{"sname","std::string","character varying",255,0,0,1},
{"rname","std::string","character varying",255,0,0,1},
{"pic","std::string","character varying",255,0,0,1},
{"intro","std::string","text",0,0,0,1}
};
const std::string &Spot::getColumnName(size_t index) noexcept(false)
{
    assert(index < metaData_.size());
    return metaData_[index].colName_;
}
Spot::Spot(const Row &r, const ssize_t indexOffset) noexcept
{
    if(indexOffset < 0)
    {
        if(!r["sid"].isNull())
        {
            sid_=std::make_shared<int32_t>(r["sid"].as<int32_t>());
        }
        if(!r["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>(r["rid"].as<int32_t>());
        }
        if(!r["sname"].isNull())
        {
            sname_=std::make_shared<std::string>(r["sname"].as<std::string>());
        }
        if(!r["rname"].isNull())
        {
            rname_=std::make_shared<std::string>(r["rname"].as<std::string>());
        }
        if(!r["pic"].isNull())
        {
            pic_=std::make_shared<std::string>(r["pic"].as<std::string>());
        }
        if(!r["intro"].isNull())
        {
            intro_=std::make_shared<std::string>(r["intro"].as<std::string>());
        }
    }
    else
    {
        size_t offset = (size_t)indexOffset;
        if(offset + 6 > r.size())
        {
            LOG_FATAL << "Invalid SQL result for this model";
            return;
        }
        size_t index;
        index = offset + 0;
        if(!r[index].isNull())
        {
            sid_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 1;
        if(!r[index].isNull())
        {
            rid_=std::make_shared<int32_t>(r[index].as<int32_t>());
        }
        index = offset + 2;
        if(!r[index].isNull())
        {
            sname_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 3;
        if(!r[index].isNull())
        {
            rname_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 4;
        if(!r[index].isNull())
        {
            pic_=std::make_shared<std::string>(r[index].as<std::string>());
        }
        index = offset + 5;
        if(!r[index].isNull())
        {
            intro_=std::make_shared<std::string>(r[index].as<std::string>());
        }
    }

}

Spot::Spot(const Json::Value &pJson, const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 6)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        dirtyFlag_[0] = true;
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            sid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            sname_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            rname_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            pic_=std::make_shared<std::string>(pJson[pMasqueradingVector[4]].asString());
        }
    }
    if(!pMasqueradingVector[5].empty() && pJson.isMember(pMasqueradingVector[5]))
    {
        dirtyFlag_[5] = true;
        if(!pJson[pMasqueradingVector[5]].isNull())
        {
            intro_=std::make_shared<std::string>(pJson[pMasqueradingVector[5]].asString());
        }
    }
}

Spot::Spot(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("sid"))
    {
        dirtyFlag_[0]=true;
        if(!pJson["sid"].isNull())
        {
            sid_=std::make_shared<int32_t>((int32_t)pJson["sid"].asInt64());
        }
    }
    if(pJson.isMember("rid"))
    {
        dirtyFlag_[1]=true;
        if(!pJson["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson["rid"].asInt64());
        }
    }
    if(pJson.isMember("sname"))
    {
        dirtyFlag_[2]=true;
        if(!pJson["sname"].isNull())
        {
            sname_=std::make_shared<std::string>(pJson["sname"].asString());
        }
    }
    if(pJson.isMember("rname"))
    {
        dirtyFlag_[3]=true;
        if(!pJson["rname"].isNull())
        {
            rname_=std::make_shared<std::string>(pJson["rname"].asString());
        }
    }
    if(pJson.isMember("pic"))
    {
        dirtyFlag_[4]=true;
        if(!pJson["pic"].isNull())
        {
            pic_=std::make_shared<std::string>(pJson["pic"].asString());
        }
    }
    if(pJson.isMember("intro"))
    {
        dirtyFlag_[5]=true;
        if(!pJson["intro"].isNull())
        {
            intro_=std::make_shared<std::string>(pJson["intro"].asString());
        }
    }
}

void Spot::updateByMasqueradedJson(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector) noexcept(false)
{
    if(pMasqueradingVector.size() != 6)
    {
        LOG_ERROR << "Bad masquerading vector";
        return;
    }
    if(!pMasqueradingVector[0].empty() && pJson.isMember(pMasqueradingVector[0]))
    {
        if(!pJson[pMasqueradingVector[0]].isNull())
        {
            sid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[0]].asInt64());
        }
    }
    if(!pMasqueradingVector[1].empty() && pJson.isMember(pMasqueradingVector[1]))
    {
        dirtyFlag_[1] = true;
        if(!pJson[pMasqueradingVector[1]].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson[pMasqueradingVector[1]].asInt64());
        }
    }
    if(!pMasqueradingVector[2].empty() && pJson.isMember(pMasqueradingVector[2]))
    {
        dirtyFlag_[2] = true;
        if(!pJson[pMasqueradingVector[2]].isNull())
        {
            sname_=std::make_shared<std::string>(pJson[pMasqueradingVector[2]].asString());
        }
    }
    if(!pMasqueradingVector[3].empty() && pJson.isMember(pMasqueradingVector[3]))
    {
        dirtyFlag_[3] = true;
        if(!pJson[pMasqueradingVector[3]].isNull())
        {
            rname_=std::make_shared<std::string>(pJson[pMasqueradingVector[3]].asString());
        }
    }
    if(!pMasqueradingVector[4].empty() && pJson.isMember(pMasqueradingVector[4]))
    {
        dirtyFlag_[4] = true;
        if(!pJson[pMasqueradingVector[4]].isNull())
        {
            pic_=std::make_shared<std::string>(pJson[pMasqueradingVector[4]].asString());
        }
    }
    if(!pMasqueradingVector[5].empty() && pJson.isMember(pMasqueradingVector[5]))
    {
        dirtyFlag_[5] = true;
        if(!pJson[pMasqueradingVector[5]].isNull())
        {
            intro_=std::make_shared<std::string>(pJson[pMasqueradingVector[5]].asString());
        }
    }
}

void Spot::updateByJson(const Json::Value &pJson) noexcept(false)
{
    if(pJson.isMember("sid"))
    {
        if(!pJson["sid"].isNull())
        {
            sid_=std::make_shared<int32_t>((int32_t)pJson["sid"].asInt64());
        }
    }
    if(pJson.isMember("rid"))
    {
        dirtyFlag_[1] = true;
        if(!pJson["rid"].isNull())
        {
            rid_=std::make_shared<int32_t>((int32_t)pJson["rid"].asInt64());
        }
    }
    if(pJson.isMember("sname"))
    {
        dirtyFlag_[2] = true;
        if(!pJson["sname"].isNull())
        {
            sname_=std::make_shared<std::string>(pJson["sname"].asString());
        }
    }
    if(pJson.isMember("rname"))
    {
        dirtyFlag_[3] = true;
        if(!pJson["rname"].isNull())
        {
            rname_=std::make_shared<std::string>(pJson["rname"].asString());
        }
    }
    if(pJson.isMember("pic"))
    {
        dirtyFlag_[4] = true;
        if(!pJson["pic"].isNull())
        {
            pic_=std::make_shared<std::string>(pJson["pic"].asString());
        }
    }
    if(pJson.isMember("intro"))
    {
        dirtyFlag_[5] = true;
        if(!pJson["intro"].isNull())
        {
            intro_=std::make_shared<std::string>(pJson["intro"].asString());
        }
    }
}

const int32_t &Spot::getValueOfSid() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(sid_)
        return *sid_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Spot::getSid() const noexcept
{
    return sid_;
}
void Spot::setSid(const int32_t &pSid) noexcept
{
    sid_ = std::make_shared<int32_t>(pSid);
    dirtyFlag_[0] = true;
}
const typename Spot::PrimaryKeyType & Spot::getPrimaryKey() const
{
    assert(sid_);
    return *sid_;
}

const int32_t &Spot::getValueOfRid() const noexcept
{
    const static int32_t defaultValue = int32_t();
    if(rid_)
        return *rid_;
    return defaultValue;
}
const std::shared_ptr<int32_t> &Spot::getRid() const noexcept
{
    return rid_;
}
void Spot::setRid(const int32_t &pRid) noexcept
{
    rid_ = std::make_shared<int32_t>(pRid);
    dirtyFlag_[1] = true;
}

const std::string &Spot::getValueOfSname() const noexcept
{
    const static std::string defaultValue = std::string();
    if(sname_)
        return *sname_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Spot::getSname() const noexcept
{
    return sname_;
}
void Spot::setSname(const std::string &pSname) noexcept
{
    sname_ = std::make_shared<std::string>(pSname);
    dirtyFlag_[2] = true;
}
void Spot::setSname(std::string &&pSname) noexcept
{
    sname_ = std::make_shared<std::string>(std::move(pSname));
    dirtyFlag_[2] = true;
}

const std::string &Spot::getValueOfRname() const noexcept
{
    const static std::string defaultValue = std::string();
    if(rname_)
        return *rname_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Spot::getRname() const noexcept
{
    return rname_;
}
void Spot::setRname(const std::string &pRname) noexcept
{
    rname_ = std::make_shared<std::string>(pRname);
    dirtyFlag_[3] = true;
}
void Spot::setRname(std::string &&pRname) noexcept
{
    rname_ = std::make_shared<std::string>(std::move(pRname));
    dirtyFlag_[3] = true;
}

const std::string &Spot::getValueOfPic() const noexcept
{
    const static std::string defaultValue = std::string();
    if(pic_)
        return *pic_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Spot::getPic() const noexcept
{
    return pic_;
}
void Spot::setPic(const std::string &pPic) noexcept
{
    pic_ = std::make_shared<std::string>(pPic);
    dirtyFlag_[4] = true;
}
void Spot::setPic(std::string &&pPic) noexcept
{
    pic_ = std::make_shared<std::string>(std::move(pPic));
    dirtyFlag_[4] = true;
}

const std::string &Spot::getValueOfIntro() const noexcept
{
    const static std::string defaultValue = std::string();
    if(intro_)
        return *intro_;
    return defaultValue;
}
const std::shared_ptr<std::string> &Spot::getIntro() const noexcept
{
    return intro_;
}
void Spot::setIntro(const std::string &pIntro) noexcept
{
    intro_ = std::make_shared<std::string>(pIntro);
    dirtyFlag_[5] = true;
}
void Spot::setIntro(std::string &&pIntro) noexcept
{
    intro_ = std::make_shared<std::string>(std::move(pIntro));
    dirtyFlag_[5] = true;
}

void Spot::updateId(const uint64_t id)
{
}

const std::vector<std::string> &Spot::insertColumns() noexcept
{
    static const std::vector<std::string> inCols={
        "sid",
        "rid",
        "sname",
        "rname",
        "pic",
        "intro"
    };
    return inCols;
}

void Spot::outputArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getSid())
        {
            binder << getValueOfSid();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
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
    if(dirtyFlag_[2])
    {
        if(getSname())
        {
            binder << getValueOfSname();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
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
    if(dirtyFlag_[4])
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
    if(dirtyFlag_[5])
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
}

const std::vector<std::string> Spot::updateColumns() const
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
    if(dirtyFlag_[5])
    {
        ret.push_back(getColumnName(5));
    }
    return ret;
}

void Spot::updateArgs(drogon::orm::internal::SqlBinder &binder) const
{
    if(dirtyFlag_[0])
    {
        if(getSid())
        {
            binder << getValueOfSid();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[1])
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
    if(dirtyFlag_[2])
    {
        if(getSname())
        {
            binder << getValueOfSname();
        }
        else
        {
            binder << nullptr;
        }
    }
    if(dirtyFlag_[3])
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
    if(dirtyFlag_[4])
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
    if(dirtyFlag_[5])
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
}
Json::Value Spot::toJson() const
{
    Json::Value ret;
    if(getSid())
    {
        ret["sid"]=getValueOfSid();
    }
    else
    {
        ret["sid"]=Json::Value();
    }
    if(getRid())
    {
        ret["rid"]=getValueOfRid();
    }
    else
    {
        ret["rid"]=Json::Value();
    }
    if(getSname())
    {
        ret["sname"]=getValueOfSname();
    }
    else
    {
        ret["sname"]=Json::Value();
    }
    if(getRname())
    {
        ret["rname"]=getValueOfRname();
    }
    else
    {
        ret["rname"]=Json::Value();
    }
    if(getPic())
    {
        ret["pic"]=getValueOfPic();
    }
    else
    {
        ret["pic"]=Json::Value();
    }
    if(getIntro())
    {
        ret["intro"]=getValueOfIntro();
    }
    else
    {
        ret["intro"]=Json::Value();
    }
    return ret;
}

Json::Value Spot::toMasqueradedJson(
    const std::vector<std::string> &pMasqueradingVector) const
{
    Json::Value ret;
    if(pMasqueradingVector.size() == 6)
    {
        if(!pMasqueradingVector[0].empty())
        {
            if(getSid())
            {
                ret[pMasqueradingVector[0]]=getValueOfSid();
            }
            else
            {
                ret[pMasqueradingVector[0]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[1].empty())
        {
            if(getRid())
            {
                ret[pMasqueradingVector[1]]=getValueOfRid();
            }
            else
            {
                ret[pMasqueradingVector[1]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[2].empty())
        {
            if(getSname())
            {
                ret[pMasqueradingVector[2]]=getValueOfSname();
            }
            else
            {
                ret[pMasqueradingVector[2]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[3].empty())
        {
            if(getRname())
            {
                ret[pMasqueradingVector[3]]=getValueOfRname();
            }
            else
            {
                ret[pMasqueradingVector[3]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[4].empty())
        {
            if(getPic())
            {
                ret[pMasqueradingVector[4]]=getValueOfPic();
            }
            else
            {
                ret[pMasqueradingVector[4]]=Json::Value();
            }
        }
        if(!pMasqueradingVector[5].empty())
        {
            if(getIntro())
            {
                ret[pMasqueradingVector[5]]=getValueOfIntro();
            }
            else
            {
                ret[pMasqueradingVector[5]]=Json::Value();
            }
        }
        return ret;
    }
    LOG_ERROR << "Masquerade failed";
    if(getSid())
    {
        ret["sid"]=getValueOfSid();
    }
    else
    {
        ret["sid"]=Json::Value();
    }
    if(getRid())
    {
        ret["rid"]=getValueOfRid();
    }
    else
    {
        ret["rid"]=Json::Value();
    }
    if(getSname())
    {
        ret["sname"]=getValueOfSname();
    }
    else
    {
        ret["sname"]=Json::Value();
    }
    if(getRname())
    {
        ret["rname"]=getValueOfRname();
    }
    else
    {
        ret["rname"]=Json::Value();
    }
    if(getPic())
    {
        ret["pic"]=getValueOfPic();
    }
    else
    {
        ret["pic"]=Json::Value();
    }
    if(getIntro())
    {
        ret["intro"]=getValueOfIntro();
    }
    else
    {
        ret["intro"]=Json::Value();
    }
    return ret;
}

bool Spot::validateJsonForCreation(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("sid"))
    {
        if(!validJsonOfField(0, "sid", pJson["sid"], err, true))
            return false;
    }
    else
    {
        err="The sid column cannot be null";
        return false;
    }
    if(pJson.isMember("rid"))
    {
        if(!validJsonOfField(1, "rid", pJson["rid"], err, true))
            return false;
    }
    else
    {
        err="The rid column cannot be null";
        return false;
    }
    if(pJson.isMember("sname"))
    {
        if(!validJsonOfField(2, "sname", pJson["sname"], err, true))
            return false;
    }
    else
    {
        err="The sname column cannot be null";
        return false;
    }
    if(pJson.isMember("rname"))
    {
        if(!validJsonOfField(3, "rname", pJson["rname"], err, true))
            return false;
    }
    else
    {
        err="The rname column cannot be null";
        return false;
    }
    if(pJson.isMember("pic"))
    {
        if(!validJsonOfField(4, "pic", pJson["pic"], err, true))
            return false;
    }
    else
    {
        err="The pic column cannot be null";
        return false;
    }
    if(pJson.isMember("intro"))
    {
        if(!validJsonOfField(5, "intro", pJson["intro"], err, true))
            return false;
    }
    else
    {
        err="The intro column cannot be null";
        return false;
    }
    return true;
}
bool Spot::validateMasqueradedJsonForCreation(const Json::Value &pJson,
                                              const std::vector<std::string> &pMasqueradingVector,
                                              std::string &err)
{
    if(pMasqueradingVector.size() != 6)
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
      if(!pMasqueradingVector[5].empty())
      {
          if(pJson.isMember(pMasqueradingVector[5]))
          {
              if(!validJsonOfField(5, pMasqueradingVector[5], pJson[pMasqueradingVector[5]], err, true))
                  return false;
          }
        else
        {
            err="The " + pMasqueradingVector[5] + " column cannot be null";
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
bool Spot::validateJsonForUpdate(const Json::Value &pJson, std::string &err)
{
    if(pJson.isMember("sid"))
    {
        if(!validJsonOfField(0, "sid", pJson["sid"], err, false))
            return false;
    }
    else
    {
        err = "The value of primary key must be set in the json object for update";
        return false;
    }
    if(pJson.isMember("rid"))
    {
        if(!validJsonOfField(1, "rid", pJson["rid"], err, false))
            return false;
    }
    if(pJson.isMember("sname"))
    {
        if(!validJsonOfField(2, "sname", pJson["sname"], err, false))
            return false;
    }
    if(pJson.isMember("rname"))
    {
        if(!validJsonOfField(3, "rname", pJson["rname"], err, false))
            return false;
    }
    if(pJson.isMember("pic"))
    {
        if(!validJsonOfField(4, "pic", pJson["pic"], err, false))
            return false;
    }
    if(pJson.isMember("intro"))
    {
        if(!validJsonOfField(5, "intro", pJson["intro"], err, false))
            return false;
    }
    return true;
}
bool Spot::validateMasqueradedJsonForUpdate(const Json::Value &pJson,
                                            const std::vector<std::string> &pMasqueradingVector,
                                            std::string &err)
{
    if(pMasqueradingVector.size() != 6)
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
      if(!pMasqueradingVector[5].empty() && pJson.isMember(pMasqueradingVector[5]))
      {
          if(!validJsonOfField(5, pMasqueradingVector[5], pJson[pMasqueradingVector[5]], err, false))
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
bool Spot::validJsonOfField(size_t index,
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
        case 4:
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
        case 5:
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
        default:
            err="Internal error in the server";
            return false;
    }
    return true;
}
