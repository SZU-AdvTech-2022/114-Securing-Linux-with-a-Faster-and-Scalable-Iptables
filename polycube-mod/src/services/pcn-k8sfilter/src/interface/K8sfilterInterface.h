/**
* k8sfilter API
* k8sfilter API generated from k8sfilter.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* K8sfilterInterface.h
*
*
*/

#pragma once

#include "../serializer/K8sfilterJsonObject.h"

#include "../Ports.h"

using namespace io::swagger::server::model;

class K8sfilterInterface {
public:

  virtual void update(const K8sfilterJsonObject &conf) = 0;
  virtual K8sfilterJsonObject toJsonObject() = 0;

  /// <summary>
  /// Entry of the ports table
  /// </summary>
  virtual std::shared_ptr<Ports> getPorts(const std::string &name) = 0;
  virtual std::vector<std::shared_ptr<Ports>> getPortsList() = 0;
  virtual void addPorts(const std::string &name, const PortsJsonObject &conf) = 0;
  virtual void addPortsList(const std::vector<PortsJsonObject> &conf) = 0;
  virtual void replacePorts(const std::string &name, const PortsJsonObject &conf) = 0;
  virtual void delPorts(const std::string &name) = 0;
  virtual void delPortsList() = 0;

  /// <summary>
  /// Port range used for NodePort services
  /// </summary>
  virtual std::string getNodeportRange() = 0;
  virtual void setNodeportRange(const std::string &value) = 0;
};
