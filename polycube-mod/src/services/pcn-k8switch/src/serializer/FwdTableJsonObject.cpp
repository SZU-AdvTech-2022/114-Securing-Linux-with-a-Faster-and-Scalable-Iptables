/**
* k8switch API
* k8switch API generated from k8switch.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "FwdTableJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

FwdTableJsonObject::FwdTableJsonObject() {
  m_addressIsSet = false;
  m_macIsSet = false;
  m_portIsSet = false;
}

FwdTableJsonObject::FwdTableJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_addressIsSet = false;
  m_macIsSet = false;
  m_portIsSet = false;


  if (val.count("address")) {
    setAddress(val.at("address").get<std::string>());
  }

  if (val.count("mac")) {
    setMac(val.at("mac").get<std::string>());
  }

  if (val.count("port")) {
    setPort(val.at("port").get<std::string>());
  }
}

nlohmann::json FwdTableJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_addressIsSet) {
    val["address"] = m_address;
  }

  if (m_macIsSet) {
    val["mac"] = m_mac;
  }

  if (m_portIsSet) {
    val["port"] = m_port;
  }

  return val;
}

std::string FwdTableJsonObject::getAddress() const {
  return m_address;
}

void FwdTableJsonObject::setAddress(std::string value) {
  m_address = value;
  m_addressIsSet = true;
}

bool FwdTableJsonObject::addressIsSet() const {
  return m_addressIsSet;
}



std::string FwdTableJsonObject::getMac() const {
  return m_mac;
}

void FwdTableJsonObject::setMac(std::string value) {
  m_mac = value;
  m_macIsSet = true;
}

bool FwdTableJsonObject::macIsSet() const {
  return m_macIsSet;
}



std::string FwdTableJsonObject::getPort() const {
  return m_port;
}

void FwdTableJsonObject::setPort(std::string value) {
  m_port = value;
  m_portIsSet = true;
}

bool FwdTableJsonObject::portIsSet() const {
  return m_portIsSet;
}




}
}
}
}
