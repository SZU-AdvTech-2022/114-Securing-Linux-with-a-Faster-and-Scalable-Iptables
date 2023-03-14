/**
* k8sdispatcher API generated from k8sdispatcher.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "NodeportRuleJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

NodeportRuleJsonObject::NodeportRuleJsonObject() {
  m_nodeportPortIsSet = false;
  m_protoIsSet = false;
  m_externalTrafficPolicy = NodeportRuleExternalTrafficPolicyEnum::CLUSTER;
  m_externalTrafficPolicyIsSet = true;
  m_ruleNameIsSet = false;
}

NodeportRuleJsonObject::NodeportRuleJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nodeportPortIsSet = false;
  m_protoIsSet = false;
  m_externalTrafficPolicyIsSet = false;
  m_ruleNameIsSet = false;


  if (val.count("nodeport-port")) {
    setNodeportPort(val.at("nodeport-port").get<uint16_t>());
  }

  if (val.count("proto")) {
    setProto(string_to_L4ProtoEnum(val.at("proto").get<std::string>()));
  }

  if (val.count("external-traffic-policy")) {
    setExternalTrafficPolicy(string_to_NodeportRuleExternalTrafficPolicyEnum(val.at("external-traffic-policy").get<std::string>()));
  }

  if (val.count("rule-name")) {
    setRuleName(val.at("rule-name").get<std::string>());
  }
}

nlohmann::json NodeportRuleJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nodeportPortIsSet) {
    val["nodeport-port"] = m_nodeportPort;
  }

  if (m_protoIsSet) {
    val["proto"] = L4ProtoEnum_to_string(m_proto);
  }

  if (m_externalTrafficPolicyIsSet) {
    val["external-traffic-policy"] = NodeportRuleExternalTrafficPolicyEnum_to_string(m_externalTrafficPolicy);
  }

  if (m_ruleNameIsSet) {
    val["rule-name"] = m_ruleName;
  }

  return val;
}

uint16_t NodeportRuleJsonObject::getNodeportPort() const {
  return m_nodeportPort;
}

void NodeportRuleJsonObject::setNodeportPort(uint16_t value) {
  m_nodeportPort = value;
  m_nodeportPortIsSet = true;
}

bool NodeportRuleJsonObject::nodeportPortIsSet() const {
  return m_nodeportPortIsSet;
}



L4ProtoEnum NodeportRuleJsonObject::getProto() const {
  return m_proto;
}

void NodeportRuleJsonObject::setProto(L4ProtoEnum value) {
  m_proto = value;
  m_protoIsSet = true;
}

bool NodeportRuleJsonObject::protoIsSet() const {
  return m_protoIsSet;
}



std::string NodeportRuleJsonObject::L4ProtoEnum_to_string(const L4ProtoEnum &value){
  switch(value) {
    case L4ProtoEnum::TCP:
      return std::string("tcp");
    case L4ProtoEnum::UDP:
      return std::string("udp");
    case L4ProtoEnum::ICMP:
      return std::string("icmp");
    default:
      throw std::runtime_error("Bad NodeportRule proto");
  }
}

L4ProtoEnum NodeportRuleJsonObject::string_to_L4ProtoEnum(const std::string &str){
  if (JsonObjectBase::iequals("tcp", str))
    return L4ProtoEnum::TCP;
  if (JsonObjectBase::iequals("udp", str))
    return L4ProtoEnum::UDP;
  if (JsonObjectBase::iequals("icmp", str))
    return L4ProtoEnum::ICMP;
  throw std::runtime_error("NodeportRule proto is invalid");
}
NodeportRuleExternalTrafficPolicyEnum NodeportRuleJsonObject::getExternalTrafficPolicy() const {
  return m_externalTrafficPolicy;
}

void NodeportRuleJsonObject::setExternalTrafficPolicy(NodeportRuleExternalTrafficPolicyEnum value) {
  m_externalTrafficPolicy = value;
  m_externalTrafficPolicyIsSet = true;
}

bool NodeportRuleJsonObject::externalTrafficPolicyIsSet() const {
  return m_externalTrafficPolicyIsSet;
}

void NodeportRuleJsonObject::unsetExternalTrafficPolicy() {
  m_externalTrafficPolicyIsSet = false;
}

std::string NodeportRuleJsonObject::NodeportRuleExternalTrafficPolicyEnum_to_string(const NodeportRuleExternalTrafficPolicyEnum &value){
  switch(value) {
    case NodeportRuleExternalTrafficPolicyEnum::LOCAL:
      return std::string("local");
    case NodeportRuleExternalTrafficPolicyEnum::CLUSTER:
      return std::string("cluster");
    default:
      throw std::runtime_error("Bad NodeportRule externalTrafficPolicy");
  }
}

NodeportRuleExternalTrafficPolicyEnum NodeportRuleJsonObject::string_to_NodeportRuleExternalTrafficPolicyEnum(const std::string &str){
  if (JsonObjectBase::iequals("local", str))
    return NodeportRuleExternalTrafficPolicyEnum::LOCAL;
  if (JsonObjectBase::iequals("cluster", str))
    return NodeportRuleExternalTrafficPolicyEnum::CLUSTER;
  throw std::runtime_error("NodeportRule externalTrafficPolicy is invalid");
}
std::string NodeportRuleJsonObject::getRuleName() const {
  return m_ruleName;
}

void NodeportRuleJsonObject::setRuleName(std::string value) {
  m_ruleName = value;
  m_ruleNameIsSet = true;
}

bool NodeportRuleJsonObject::ruleNameIsSet() const {
  return m_ruleNameIsSet;
}

void NodeportRuleJsonObject::unsetRuleName() {
  m_ruleNameIsSet = false;
}


}
}
}
