/**
* lbdsr API
* lbdsr API generated from lbdsr.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "BackendJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

BackendJsonObject::BackendJsonObject() {
  m_poolIsSet = false;
}

BackendJsonObject::BackendJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_poolIsSet = false;


  if (val.count("pool")) {
    for (auto& item : val["pool"]) {
      BackendPoolJsonObject newItem{ item };
      m_pool.push_back(newItem);
    }

    m_poolIsSet = true;
  }
}

nlohmann::json BackendJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_pool) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["pool"] = jsonArray;
    }
  }

  return val;
}

const std::vector<BackendPoolJsonObject>& BackendJsonObject::getPool() const{
  return m_pool;
}

void BackendJsonObject::addBackendPool(BackendPoolJsonObject value) {
  m_pool.push_back(value);
  m_poolIsSet = true;
}


bool BackendJsonObject::poolIsSet() const {
  return m_poolIsSet;
}

void BackendJsonObject::unsetPool() {
  m_poolIsSet = false;
}


}
}
}
}
