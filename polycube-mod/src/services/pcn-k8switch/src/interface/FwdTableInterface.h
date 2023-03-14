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

/*
* FwdTableInterface.h
*
*
*/

#pragma once

#include "../serializer/FwdTableJsonObject.h"


using namespace io::swagger::server::model;

class FwdTableInterface {
public:

  virtual void update(const FwdTableJsonObject &conf) = 0;
  virtual FwdTableJsonObject toJsonObject() = 0;

  /// <summary>
  /// Destination IP address
  /// </summary>
  virtual std::string getAddress() = 0;

  /// <summary>
  /// Destination MAC address
  /// </summary>
  virtual std::string getMac() = 0;
  virtual void setMac(const std::string &value) = 0;

  /// <summary>
  /// Port where this entry is present
  /// </summary>
  virtual std::string getPort() = 0;
  virtual void setPort(const std::string &value) = 0;
};
