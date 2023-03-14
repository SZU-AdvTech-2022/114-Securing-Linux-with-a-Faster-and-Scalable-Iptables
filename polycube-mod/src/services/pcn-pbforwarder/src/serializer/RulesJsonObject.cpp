/**
* pbforwarder API
* pbforwarder API generated from pbforwarder.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "RulesJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RulesJsonObject::RulesJsonObject() {
  m_idIsSet = false;
  m_vlanIsSet = false;
  m_srcMacIsSet = false;
  m_dstMacIsSet = false;
  m_srcIpIsSet = false;
  m_dstIpIsSet = false;
  m_l4ProtoIsSet = false;
  m_srcPortIsSet = false;
  m_dstPortIsSet = false;
  m_inPortIsSet = false;
  m_outPortIsSet = false;
  m_action = RulesActionEnum::DROP;
  m_actionIsSet = true;
}

RulesJsonObject::RulesJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_idIsSet = false;
  m_vlanIsSet = false;
  m_srcMacIsSet = false;
  m_dstMacIsSet = false;
  m_srcIpIsSet = false;
  m_dstIpIsSet = false;
  m_l4ProtoIsSet = false;
  m_srcPortIsSet = false;
  m_dstPortIsSet = false;
  m_inPortIsSet = false;
  m_outPortIsSet = false;
  m_actionIsSet = false;


  if (val.count("id")) {
    setId(val.at("id").get<uint32_t>());
  }

  if (val.count("vlan")) {
    setVlan(val.at("vlan").get<uint32_t>());
  }

  if (val.count("src_mac")) {
    setSrcMac(val.at("src_mac").get<std::string>());
  }

  if (val.count("dst_mac")) {
    setDstMac(val.at("dst_mac").get<std::string>());
  }

  if (val.count("src_ip")) {
    setSrcIp(val.at("src_ip").get<std::string>());
  }

  if (val.count("dst_ip")) {
    setDstIp(val.at("dst_ip").get<std::string>());
  }

  if (val.count("l4_proto")) {
    setL4Proto(string_to_RulesL4ProtoEnum(val.at("l4_proto").get<std::string>()));
  }

  if (val.count("src_port")) {
    setSrcPort(val.at("src_port").get<uint16_t>());
  }

  if (val.count("dst_port")) {
    setDstPort(val.at("dst_port").get<uint16_t>());
  }

  if (val.count("in_port")) {
    setInPort(val.at("in_port").get<std::string>());
  }

  if (val.count("out_port")) {
    setOutPort(val.at("out_port").get<std::string>());
  }

  if (val.count("action")) {
    setAction(string_to_RulesActionEnum(val.at("action").get<std::string>()));
  }
}

nlohmann::json RulesJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_idIsSet) {
    val["id"] = m_id;
  }

  if (m_vlanIsSet) {
    val["vlan"] = m_vlan;
  }

  if (m_srcMacIsSet) {
    val["src_mac"] = m_srcMac;
  }

  if (m_dstMacIsSet) {
    val["dst_mac"] = m_dstMac;
  }

  if (m_srcIpIsSet) {
    val["src_ip"] = m_srcIp;
  }

  if (m_dstIpIsSet) {
    val["dst_ip"] = m_dstIp;
  }

  if (m_l4ProtoIsSet) {
    val["l4_proto"] = RulesL4ProtoEnum_to_string(m_l4Proto);
  }

  if (m_srcPortIsSet) {
    val["src_port"] = m_srcPort;
  }

  if (m_dstPortIsSet) {
    val["dst_port"] = m_dstPort;
  }

  if (m_inPortIsSet) {
    val["in_port"] = m_inPort;
  }

  if (m_outPortIsSet) {
    val["out_port"] = m_outPort;
  }

  if (m_actionIsSet) {
    val["action"] = RulesActionEnum_to_string(m_action);
  }

  return val;
}

uint32_t RulesJsonObject::getId() const {
  return m_id;
}

void RulesJsonObject::setId(uint32_t value) {
  m_id = value;
  m_idIsSet = true;
}

bool RulesJsonObject::idIsSet() const {
  return m_idIsSet;
}



uint32_t RulesJsonObject::getVlan() const {
  return m_vlan;
}

void RulesJsonObject::setVlan(uint32_t value) {
  m_vlan = value;
  m_vlanIsSet = true;
}

bool RulesJsonObject::vlanIsSet() const {
  return m_vlanIsSet;
}

void RulesJsonObject::unsetVlan() {
  m_vlanIsSet = false;
}

std::string RulesJsonObject::getSrcMac() const {
  return m_srcMac;
}

void RulesJsonObject::setSrcMac(std::string value) {
  m_srcMac = value;
  m_srcMacIsSet = true;
}

bool RulesJsonObject::srcMacIsSet() const {
  return m_srcMacIsSet;
}

void RulesJsonObject::unsetSrcMac() {
  m_srcMacIsSet = false;
}

std::string RulesJsonObject::getDstMac() const {
  return m_dstMac;
}

void RulesJsonObject::setDstMac(std::string value) {
  m_dstMac = value;
  m_dstMacIsSet = true;
}

bool RulesJsonObject::dstMacIsSet() const {
  return m_dstMacIsSet;
}

void RulesJsonObject::unsetDstMac() {
  m_dstMacIsSet = false;
}

std::string RulesJsonObject::getSrcIp() const {
  return m_srcIp;
}

void RulesJsonObject::setSrcIp(std::string value) {
  m_srcIp = value;
  m_srcIpIsSet = true;
}

bool RulesJsonObject::srcIpIsSet() const {
  return m_srcIpIsSet;
}

void RulesJsonObject::unsetSrcIp() {
  m_srcIpIsSet = false;
}

std::string RulesJsonObject::getDstIp() const {
  return m_dstIp;
}

void RulesJsonObject::setDstIp(std::string value) {
  m_dstIp = value;
  m_dstIpIsSet = true;
}

bool RulesJsonObject::dstIpIsSet() const {
  return m_dstIpIsSet;
}

void RulesJsonObject::unsetDstIp() {
  m_dstIpIsSet = false;
}

RulesL4ProtoEnum RulesJsonObject::getL4Proto() const {
  return m_l4Proto;
}

void RulesJsonObject::setL4Proto(RulesL4ProtoEnum value) {
  m_l4Proto = value;
  m_l4ProtoIsSet = true;
}

bool RulesJsonObject::l4ProtoIsSet() const {
  return m_l4ProtoIsSet;
}

void RulesJsonObject::unsetL4Proto() {
  m_l4ProtoIsSet = false;
}

std::string RulesJsonObject::RulesL4ProtoEnum_to_string(const RulesL4ProtoEnum &value){
  switch(value) {
    case RulesL4ProtoEnum::UDP:
      return std::string("udp");
    case RulesL4ProtoEnum::TCP:
      return std::string("tcp");
    default:
      throw std::runtime_error("Bad Rules l4Proto");
  }
}

RulesL4ProtoEnum RulesJsonObject::string_to_RulesL4ProtoEnum(const std::string &str){
  if (JsonObjectBase::iequals("udp", str))
    return RulesL4ProtoEnum::UDP;
  if (JsonObjectBase::iequals("tcp", str))
    return RulesL4ProtoEnum::TCP;
  throw std::runtime_error("Rules l4Proto is invalid");
}
uint16_t RulesJsonObject::getSrcPort() const {
  return m_srcPort;
}

void RulesJsonObject::setSrcPort(uint16_t value) {
  m_srcPort = value;
  m_srcPortIsSet = true;
}

bool RulesJsonObject::srcPortIsSet() const {
  return m_srcPortIsSet;
}

void RulesJsonObject::unsetSrcPort() {
  m_srcPortIsSet = false;
}

uint16_t RulesJsonObject::getDstPort() const {
  return m_dstPort;
}

void RulesJsonObject::setDstPort(uint16_t value) {
  m_dstPort = value;
  m_dstPortIsSet = true;
}

bool RulesJsonObject::dstPortIsSet() const {
  return m_dstPortIsSet;
}

void RulesJsonObject::unsetDstPort() {
  m_dstPortIsSet = false;
}

std::string RulesJsonObject::getInPort() const {
  return m_inPort;
}

void RulesJsonObject::setInPort(std::string value) {
  m_inPort = value;
  m_inPortIsSet = true;
}

bool RulesJsonObject::inPortIsSet() const {
  return m_inPortIsSet;
}

void RulesJsonObject::unsetInPort() {
  m_inPortIsSet = false;
}

std::string RulesJsonObject::getOutPort() const {
  return m_outPort;
}

void RulesJsonObject::setOutPort(std::string value) {
  m_outPort = value;
  m_outPortIsSet = true;
}

bool RulesJsonObject::outPortIsSet() const {
  return m_outPortIsSet;
}

void RulesJsonObject::unsetOutPort() {
  m_outPortIsSet = false;
}

RulesActionEnum RulesJsonObject::getAction() const {
  return m_action;
}

void RulesJsonObject::setAction(RulesActionEnum value) {
  m_action = value;
  m_actionIsSet = true;
}

bool RulesJsonObject::actionIsSet() const {
  return m_actionIsSet;
}

void RulesJsonObject::unsetAction() {
  m_actionIsSet = false;
}

std::string RulesJsonObject::RulesActionEnum_to_string(const RulesActionEnum &value){
  switch(value) {
    case RulesActionEnum::DROP:
      return std::string("drop");
    case RulesActionEnum::SLOWPATH:
      return std::string("slowpath");
    case RulesActionEnum::FORWARD:
      return std::string("forward");
    default:
      throw std::runtime_error("Bad Rules action");
  }
}

RulesActionEnum RulesJsonObject::string_to_RulesActionEnum(const std::string &str){
  if (JsonObjectBase::iequals("drop", str))
    return RulesActionEnum::DROP;
  if (JsonObjectBase::iequals("slowpath", str))
    return RulesActionEnum::SLOWPATH;
  if (JsonObjectBase::iequals("forward", str))
    return RulesActionEnum::FORWARD;
  throw std::runtime_error("Rules action is invalid");
}

}
}
}
}
