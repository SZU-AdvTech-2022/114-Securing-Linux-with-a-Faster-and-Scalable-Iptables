/**
* simpleforwarder API generated from simpleforwarder.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */

/*
* SimpleforwarderApiImpl.h
*
*
*/

#pragma once


#include <memory>
#include <map>
#include <mutex>
#include "../Simpleforwarder.h"

#include "ActionsJsonObject.h"
#include "PortsJsonObject.h"
#include "SimpleforwarderJsonObject.h"
#include <vector>

namespace polycube {
namespace service {
namespace api {

using namespace polycube::service::model;

namespace SimpleforwarderApiImpl {
  void create_simpleforwarder_actions_by_id(const std::string &name, const std::string &inport, const ActionsJsonObject &value);
  void create_simpleforwarder_actions_list_by_id(const std::string &name, const std::vector<ActionsJsonObject> &value);
  void create_simpleforwarder_by_id(const std::string &name, const SimpleforwarderJsonObject &value);
  void create_simpleforwarder_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void create_simpleforwarder_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void delete_simpleforwarder_actions_by_id(const std::string &name, const std::string &inport);
  void delete_simpleforwarder_actions_list_by_id(const std::string &name);
  void delete_simpleforwarder_by_id(const std::string &name);
  void delete_simpleforwarder_ports_by_id(const std::string &name, const std::string &portsName);
  void delete_simpleforwarder_ports_list_by_id(const std::string &name);
  ActionsActionEnum read_simpleforwarder_actions_action_by_id(const std::string &name, const std::string &inport);
  ActionsJsonObject read_simpleforwarder_actions_by_id(const std::string &name, const std::string &inport);
  std::vector<ActionsJsonObject> read_simpleforwarder_actions_list_by_id(const std::string &name);
  std::string read_simpleforwarder_actions_outport_by_id(const std::string &name, const std::string &inport);
  SimpleforwarderJsonObject read_simpleforwarder_by_id(const std::string &name);
  std::vector<SimpleforwarderJsonObject> read_simpleforwarder_list_by_id();
  PortsJsonObject read_simpleforwarder_ports_by_id(const std::string &name, const std::string &portsName);
  std::vector<PortsJsonObject> read_simpleforwarder_ports_list_by_id(const std::string &name);
  void replace_simpleforwarder_actions_by_id(const std::string &name, const std::string &inport, const ActionsJsonObject &value);
  void replace_simpleforwarder_actions_list_by_id(const std::string &name, const std::vector<ActionsJsonObject> &value);
  void replace_simpleforwarder_by_id(const std::string &name, const SimpleforwarderJsonObject &value);
  void replace_simpleforwarder_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void replace_simpleforwarder_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void update_simpleforwarder_actions_action_by_id(const std::string &name, const std::string &inport, const ActionsActionEnum &value);
  void update_simpleforwarder_actions_by_id(const std::string &name, const std::string &inport, const ActionsJsonObject &value);
  void update_simpleforwarder_actions_list_by_id(const std::string &name, const std::vector<ActionsJsonObject> &value);
  void update_simpleforwarder_actions_outport_by_id(const std::string &name, const std::string &inport, const std::string &value);
  void update_simpleforwarder_by_id(const std::string &name, const SimpleforwarderJsonObject &value);
  void update_simpleforwarder_list_by_id(const std::vector<SimpleforwarderJsonObject> &value);
  void update_simpleforwarder_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void update_simpleforwarder_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);

  /* help related */
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_simpleforwarder_actions_list_by_id_get_list(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_simpleforwarder_list_by_id_get_list();
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_simpleforwarder_ports_list_by_id_get_list(const std::string &name);

}
}
}
}
