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


#include "LbdsrApiImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

namespace LbdsrApiImpl {
namespace {
std::unordered_map<std::string, std::shared_ptr<Lbdsr>> cubes;
std::mutex cubes_mutex;

std::shared_ptr<Lbdsr> get_cube(const std::string &name) {
  std::lock_guard<std::mutex> guard(cubes_mutex);
  auto iter = cubes.find(name);
  if (iter == cubes.end()) {
    throw std::runtime_error("Cube " + name + " does not exist");
  }

  return iter->second;
}

}

void create_lbdsr_by_id(const std::string &name, const LbdsrJsonObject &jsonObject) {
  {
    // check if name is valid before creating it
    std::lock_guard<std::mutex> guard(cubes_mutex);
    if (cubes.count(name) != 0) {
      throw std::runtime_error("There is already a cube with name " + name);
    }
  }
  auto ptr = std::make_shared<Lbdsr>(name, jsonObject);
  std::unordered_map<std::string, std::shared_ptr<Lbdsr>>::iterator iter;
  bool inserted;

  std::lock_guard<std::mutex> guard(cubes_mutex);
  std::tie(iter, inserted) = cubes.emplace(name, std::move(ptr));

  if (!inserted) {
    throw std::runtime_error("There is already a cube with name " + name);
  }
}

void replace_lbdsr_by_id(const std::string &name, const LbdsrJsonObject &bridge){
  throw std::runtime_error("Method not supported!");
}

void delete_lbdsr_by_id(const std::string &name) {
  std::lock_guard<std::mutex> guard(cubes_mutex);
  if (cubes.count(name) == 0) {
    throw std::runtime_error("Cube " + name + " does not exist");
  }
  cubes.erase(name);
}

std::vector<LbdsrJsonObject> read_lbdsr_list_by_id() {
  std::vector<LbdsrJsonObject> jsonObject_vect;
  for(auto &i : cubes) {
    auto m = get_cube(i.first);
    jsonObject_vect.push_back(m->toJsonObject());
  }
  return jsonObject_vect;
}

std::vector<nlohmann::fifo_map<std::string, std::string>> read_lbdsr_list_by_id_get_list() {
  std::vector<nlohmann::fifo_map<std::string, std::string>> r;
  for (auto &x : cubes) {
    nlohmann::fifo_map<std::string, std::string> m;
    m["name"] = x.first;
    r.push_back(std::move(m));
  }
  return r;
}

/**
* @brief   Create backend by ID
*
* Create operation of resource: backend*
*
* @param[in] name ID of name
* @param[in] value backendbody object
*
* Responses:
*
*/
void
create_lbdsr_backend_by_id(const std::string &name, const BackendJsonObject &value) {
  auto lbdsr = get_cube(name);

  lbdsr->addBackend(value);
}

/**
* @brief   Create pool by ID
*
* Create operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] id ID of id
* @param[in] value poolbody object
*
* Responses:
*
*/
void
create_lbdsr_backend_pool_by_id(const std::string &name, const uint32_t &id, const BackendPoolJsonObject &value) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();

  backend->addPool(id, value);
}

/**
* @brief   Create pool by ID
*
* Create operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] value poolbody object
*
* Responses:
*
*/
void
create_lbdsr_backend_pool_list_by_id(const std::string &name, const std::vector<BackendPoolJsonObject> &value) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();
  backend->addPoolList(value);
}

/**
* @brief   Create frontend by ID
*
* Create operation of resource: frontend*
*
* @param[in] name ID of name
* @param[in] value frontendbody object
*
* Responses:
*
*/
void
create_lbdsr_frontend_by_id(const std::string &name, const FrontendJsonObject &value) {
  auto lbdsr = get_cube(name);

  lbdsr->addFrontend(value);
}

/**
* @brief   Create ports by ID
*
* Create operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] value portsbody object
*
* Responses:
*
*/
void
create_lbdsr_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value) {
  auto lbdsr = get_cube(name);

  lbdsr->addPorts(portsName, value);
}

/**
* @brief   Create ports by ID
*
* Create operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] value portsbody object
*
* Responses:
*
*/
void
create_lbdsr_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value) {
  auto lbdsr = get_cube(name);
  lbdsr->addPortsList(value);
}

/**
* @brief   Delete backend by ID
*
* Delete operation of resource: backend*
*
* @param[in] name ID of name
*
* Responses:
*
*/
void
delete_lbdsr_backend_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);

  lbdsr->delBackend();
}

/**
* @brief   Delete pool by ID
*
* Delete operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] id ID of id
*
* Responses:
*
*/
void
delete_lbdsr_backend_pool_by_id(const std::string &name, const uint32_t &id) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();

  backend->delPool(id);
}

/**
* @brief   Delete pool by ID
*
* Delete operation of resource: pool*
*
* @param[in] name ID of name
*
* Responses:
*
*/
void
delete_lbdsr_backend_pool_list_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();
  backend->delPoolList();
}

/**
* @brief   Delete frontend by ID
*
* Delete operation of resource: frontend*
*
* @param[in] name ID of name
*
* Responses:
*
*/
void
delete_lbdsr_frontend_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);

  lbdsr->delFrontend();
}

/**
* @brief   Delete ports by ID
*
* Delete operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
*
*/
void
delete_lbdsr_ports_by_id(const std::string &name, const std::string &portsName) {
  auto lbdsr = get_cube(name);

  lbdsr->delPorts(portsName);
}

/**
* @brief   Delete ports by ID
*
* Delete operation of resource: ports*
*
* @param[in] name ID of name
*
* Responses:
*
*/
void
delete_lbdsr_ports_list_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  lbdsr->delPortsList();
}

/**
* @brief   Read algorithm by ID
*
* Read operation of resource: algorithm*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
read_lbdsr_algorithm_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  return lbdsr->getAlgorithm();

}

/**
* @brief   Read backend by ID
*
* Read operation of resource: backend*
*
* @param[in] name ID of name
*
* Responses:
* BackendJsonObject
*/
BackendJsonObject
read_lbdsr_backend_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  return lbdsr->getBackend()->toJsonObject();

}

/**
* @brief   Read pool by ID
*
* Read operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] id ID of id
*
* Responses:
* BackendPoolJsonObject
*/
BackendPoolJsonObject
read_lbdsr_backend_pool_by_id(const std::string &name, const uint32_t &id) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();
  return backend->getPool(id)->toJsonObject();

}

/**
* @brief   Read pool by ID
*
* Read operation of resource: pool*
*
* @param[in] name ID of name
*
* Responses:
* std::vector<BackendPoolJsonObject>
*/
std::vector<BackendPoolJsonObject>
read_lbdsr_backend_pool_list_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();
  auto &&pool = backend->getPoolList();
  std::vector<BackendPoolJsonObject> m;
  for(auto &i : pool)
    m.push_back(i->toJsonObject());
  return m;
}

/**
* @brief   Read mac by ID
*
* Read operation of resource: mac*
*
* @param[in] name ID of name
* @param[in] id ID of id
*
* Responses:
* std::string
*/
std::string
read_lbdsr_backend_pool_mac_by_id(const std::string &name, const uint32_t &id) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();
  auto pool = backend->getPool(id);
  return pool->getMac();

}

/**
* @brief   Read lbdsr by ID
*
* Read operation of resource: lbdsr*
*
* @param[in] name ID of name
*
* Responses:
* LbdsrJsonObject
*/
LbdsrJsonObject
read_lbdsr_by_id(const std::string &name) {
  return get_cube(name)->toJsonObject();

}

/**
* @brief   Read frontend by ID
*
* Read operation of resource: frontend*
*
* @param[in] name ID of name
*
* Responses:
* FrontendJsonObject
*/
FrontendJsonObject
read_lbdsr_frontend_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  return lbdsr->getFrontend()->toJsonObject();

}

/**
* @brief   Read mac by ID
*
* Read operation of resource: mac*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
read_lbdsr_frontend_mac_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  auto frontend = lbdsr->getFrontend();
  return frontend->getMac();

}

/**
* @brief   Read vip by ID
*
* Read operation of resource: vip*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
read_lbdsr_frontend_vip_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  auto frontend = lbdsr->getFrontend();
  return frontend->getVip();

}

/**
* @brief   Read ports by ID
*
* Read operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* PortsJsonObject
*/
PortsJsonObject
read_lbdsr_ports_by_id(const std::string &name, const std::string &portsName) {
  auto lbdsr = get_cube(name);
  return lbdsr->getPorts(portsName)->toJsonObject();

}

/**
* @brief   Read ports by ID
*
* Read operation of resource: ports*
*
* @param[in] name ID of name
*
* Responses:
* std::vector<PortsJsonObject>
*/
std::vector<PortsJsonObject>
read_lbdsr_ports_list_by_id(const std::string &name) {
  auto lbdsr = get_cube(name);
  auto &&ports = lbdsr->getPortsList();
  std::vector<PortsJsonObject> m;
  for(auto &i : ports)
    m.push_back(i->toJsonObject());
  return m;
}

/**
* @brief   Read type by ID
*
* Read operation of resource: type*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* PortsTypeEnum
*/
PortsTypeEnum
read_lbdsr_ports_type_by_id(const std::string &name, const std::string &portsName) {
  auto lbdsr = get_cube(name);
  auto ports = lbdsr->getPorts(portsName);
  return ports->getType();

}

/**
* @brief   Replace backend by ID
*
* Replace operation of resource: backend*
*
* @param[in] name ID of name
* @param[in] value backendbody object
*
* Responses:
*
*/
void
replace_lbdsr_backend_by_id(const std::string &name, const BackendJsonObject &value) {
  auto lbdsr = get_cube(name);

  lbdsr->replaceBackend(value);
}

/**
* @brief   Replace pool by ID
*
* Replace operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] id ID of id
* @param[in] value poolbody object
*
* Responses:
*
*/
void
replace_lbdsr_backend_pool_by_id(const std::string &name, const uint32_t &id, const BackendPoolJsonObject &value) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();

  backend->replacePool(id, value);
}

/**
* @brief   Replace pool by ID
*
* Replace operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] value poolbody object
*
* Responses:
*
*/
void
replace_lbdsr_backend_pool_list_by_id(const std::string &name, const std::vector<BackendPoolJsonObject> &value) {
  throw std::runtime_error("Method not supported");
}

/**
* @brief   Replace frontend by ID
*
* Replace operation of resource: frontend*
*
* @param[in] name ID of name
* @param[in] value frontendbody object
*
* Responses:
*
*/
void
replace_lbdsr_frontend_by_id(const std::string &name, const FrontendJsonObject &value) {
  auto lbdsr = get_cube(name);

  lbdsr->replaceFrontend(value);
}

/**
* @brief   Replace ports by ID
*
* Replace operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] value portsbody object
*
* Responses:
*
*/
void
replace_lbdsr_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value) {
  auto lbdsr = get_cube(name);

  lbdsr->replacePorts(portsName, value);
}

/**
* @brief   Replace ports by ID
*
* Replace operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] value portsbody object
*
* Responses:
*
*/
void
replace_lbdsr_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value) {
  throw std::runtime_error("Method not supported");
}

/**
* @brief   Update algorithm by ID
*
* Update operation of resource: algorithm*
*
* @param[in] name ID of name
* @param[in] value Defines the algorithm which LB use to direct requests to the node of the pool (Random, RoundRobin, ..)
*
* Responses:
*
*/
void
update_lbdsr_algorithm_by_id(const std::string &name, const std::string &value) {
  auto lbdsr = get_cube(name);

  lbdsr->setAlgorithm(value);
}

/**
* @brief   Update backend by ID
*
* Update operation of resource: backend*
*
* @param[in] name ID of name
* @param[in] value backendbody object
*
* Responses:
*
*/
void
update_lbdsr_backend_by_id(const std::string &name, const BackendJsonObject &value) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();

  backend->update(value);
}

/**
* @brief   Update pool by ID
*
* Update operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] id ID of id
* @param[in] value poolbody object
*
* Responses:
*
*/
void
update_lbdsr_backend_pool_by_id(const std::string &name, const uint32_t &id, const BackendPoolJsonObject &value) {
  auto lbdsr = get_cube(name);
  auto backend = lbdsr->getBackend();
  auto pool = backend->getPool(id);

  pool->update(value);
}

/**
* @brief   Update pool by ID
*
* Update operation of resource: pool*
*
* @param[in] name ID of name
* @param[in] value poolbody object
*
* Responses:
*
*/
void
update_lbdsr_backend_pool_list_by_id(const std::string &name, const std::vector<BackendPoolJsonObject> &value) {
  throw std::runtime_error("Method not supported");
}

/**
* @brief   Update lbdsr by ID
*
* Update operation of resource: lbdsr*
*
* @param[in] name ID of name
* @param[in] value lbdsrbody object
*
* Responses:
*
*/
void
update_lbdsr_by_id(const std::string &name, const LbdsrJsonObject &value) {
  auto lbdsr = get_cube(name);

  lbdsr->update(value);
}

/**
* @brief   Update frontend by ID
*
* Update operation of resource: frontend*
*
* @param[in] name ID of name
* @param[in] value frontendbody object
*
* Responses:
*
*/
void
update_lbdsr_frontend_by_id(const std::string &name, const FrontendJsonObject &value) {
  auto lbdsr = get_cube(name);
  auto frontend = lbdsr->getFrontend();

  frontend->update(value);
}

/**
* @brief   Update mac by ID
*
* Update operation of resource: mac*
*
* @param[in] name ID of name
* @param[in] value MAC address of the port
*
* Responses:
*
*/
void
update_lbdsr_frontend_mac_by_id(const std::string &name, const std::string &value) {
  auto lbdsr = get_cube(name);
  auto frontend = lbdsr->getFrontend();

  frontend->setMac(value);
}

/**
* @brief   Update vip by ID
*
* Update operation of resource: vip*
*
* @param[in] name ID of name
* @param[in] value IP address of the loadbalancer frontend
*
* Responses:
*
*/
void
update_lbdsr_frontend_vip_by_id(const std::string &name, const std::string &value) {
  auto lbdsr = get_cube(name);
  auto frontend = lbdsr->getFrontend();

  frontend->setVip(value);
}

/**
* @brief   Update lbdsr by ID
*
* Update operation of resource: lbdsr*
*
* @param[in] value lbdsrbody object
*
* Responses:
*
*/
void
update_lbdsr_list_by_id(const std::vector<LbdsrJsonObject> &value) {
  throw std::runtime_error("Method not supported");
}

/**
* @brief   Update ports by ID
*
* Update operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] value portsbody object
*
* Responses:
*
*/
void
update_lbdsr_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value) {
  auto lbdsr = get_cube(name);
  auto ports = lbdsr->getPorts(portsName);

  ports->update(value);
}

/**
* @brief   Update ports by ID
*
* Update operation of resource: ports*
*
* @param[in] name ID of name
* @param[in] value portsbody object
*
* Responses:
*
*/
void
update_lbdsr_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value) {
  throw std::runtime_error("Method not supported");
}

/**
* @brief   Update type by ID
*
* Update operation of resource: type*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] value Type of the LB port (e.g. FRONTEND or BACKEND)
*
* Responses:
*
*/
void
update_lbdsr_ports_type_by_id(const std::string &name, const std::string &portsName, const PortsTypeEnum &value) {
  auto lbdsr = get_cube(name);
  auto ports = lbdsr->getPorts(portsName);

  ports->setType(value);
}



/*
 * help related
 */

std::vector<nlohmann::fifo_map<std::string, std::string>> read_lbdsr_backend_pool_list_by_id_get_list(const std::string &name) {
  std::vector<nlohmann::fifo_map<std::string, std::string>> r;
  auto &&lbdsr = get_cube(name);
  auto &&backend = lbdsr->getBackend();

  auto &&pool = backend->getPoolList();
  for(auto &i : pool) {
    nlohmann::fifo_map<std::string, std::string> keys;

    keys["id"] = std::to_string(i->getId());

    r.push_back(keys);
  }
  return r;
}

std::vector<nlohmann::fifo_map<std::string, std::string>> read_lbdsr_ports_list_by_id_get_list(const std::string &name) {
  std::vector<nlohmann::fifo_map<std::string, std::string>> r;
  auto &&lbdsr = get_cube(name);

  auto &&ports = lbdsr->getPortsList();
  for(auto &i : ports) {
    nlohmann::fifo_map<std::string, std::string> keys;

    keys["name"] = i->getName();

    r.push_back(keys);
  }
  return r;
}


}

}
}
}
}
