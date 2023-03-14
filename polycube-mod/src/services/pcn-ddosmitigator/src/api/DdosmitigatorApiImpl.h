/**
* ddosmitigator API
* ddosmitigator API generated from ddosmitigator.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* DdosmitigatorApiImpl.h
*
*
*/

#pragma once


#include <memory>
#include <map>
#include <mutex>
#include "../Ddosmitigator.h"

#include "BlacklistDstJsonObject.h"
#include "BlacklistSrcJsonObject.h"
#include "DdosmitigatorJsonObject.h"
#include "StatsJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

namespace DdosmitigatorApiImpl {
  void create_ddosmitigator_blacklist_dst_by_id(const std::string &name, const std::string &ip, const BlacklistDstJsonObject &value);
  void create_ddosmitigator_blacklist_dst_list_by_id(const std::string &name, const std::vector<BlacklistDstJsonObject> &value);
  void create_ddosmitigator_blacklist_src_by_id(const std::string &name, const std::string &ip, const BlacklistSrcJsonObject &value);
  void create_ddosmitigator_blacklist_src_list_by_id(const std::string &name, const std::vector<BlacklistSrcJsonObject> &value);
  void create_ddosmitigator_by_id(const std::string &name, const DdosmitigatorJsonObject &value);
  void delete_ddosmitigator_blacklist_dst_by_id(const std::string &name, const std::string &ip);
  void delete_ddosmitigator_blacklist_dst_list_by_id(const std::string &name);
  void delete_ddosmitigator_blacklist_src_by_id(const std::string &name, const std::string &ip);
  void delete_ddosmitigator_blacklist_src_list_by_id(const std::string &name);
  void delete_ddosmitigator_by_id(const std::string &name);
  BlacklistDstJsonObject read_ddosmitigator_blacklist_dst_by_id(const std::string &name, const std::string &ip);
  uint64_t read_ddosmitigator_blacklist_dst_drop_pkts_by_id(const std::string &name, const std::string &ip);
  std::vector<BlacklistDstJsonObject> read_ddosmitigator_blacklist_dst_list_by_id(const std::string &name);
  BlacklistSrcJsonObject read_ddosmitigator_blacklist_src_by_id(const std::string &name, const std::string &ip);
  uint64_t read_ddosmitigator_blacklist_src_drop_pkts_by_id(const std::string &name, const std::string &ip);
  std::vector<BlacklistSrcJsonObject> read_ddosmitigator_blacklist_src_list_by_id(const std::string &name);
  DdosmitigatorJsonObject read_ddosmitigator_by_id(const std::string &name);
  std::vector<DdosmitigatorJsonObject> read_ddosmitigator_list_by_id();
  StatsJsonObject read_ddosmitigator_stats_by_id(const std::string &name);
  uint64_t read_ddosmitigator_stats_pkts_by_id(const std::string &name);
  uint64_t read_ddosmitigator_stats_pps_by_id(const std::string &name);
  void replace_ddosmitigator_blacklist_dst_by_id(const std::string &name, const std::string &ip, const BlacklistDstJsonObject &value);
  void replace_ddosmitigator_blacklist_dst_list_by_id(const std::string &name, const std::vector<BlacklistDstJsonObject> &value);
  void replace_ddosmitigator_blacklist_src_by_id(const std::string &name, const std::string &ip, const BlacklistSrcJsonObject &value);
  void replace_ddosmitigator_blacklist_src_list_by_id(const std::string &name, const std::vector<BlacklistSrcJsonObject> &value);
  void replace_ddosmitigator_by_id(const std::string &name, const DdosmitigatorJsonObject &value);
  void update_ddosmitigator_blacklist_dst_by_id(const std::string &name, const std::string &ip, const BlacklistDstJsonObject &value);
  void update_ddosmitigator_blacklist_dst_list_by_id(const std::string &name, const std::vector<BlacklistDstJsonObject> &value);
  void update_ddosmitigator_blacklist_src_by_id(const std::string &name, const std::string &ip, const BlacklistSrcJsonObject &value);
  void update_ddosmitigator_blacklist_src_list_by_id(const std::string &name, const std::vector<BlacklistSrcJsonObject> &value);
  void update_ddosmitigator_by_id(const std::string &name, const DdosmitigatorJsonObject &value);
  void update_ddosmitigator_list_by_id(const std::vector<DdosmitigatorJsonObject> &value);

  /* help related */
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_ddosmitigator_blacklist_dst_list_by_id_get_list(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_ddosmitigator_blacklist_src_list_by_id_get_list(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_ddosmitigator_list_by_id_get_list();

}
}
}
}
}
