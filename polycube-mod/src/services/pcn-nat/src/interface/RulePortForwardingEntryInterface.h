/**
* nat API
* nat API generated from nat.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* RulePortForwardingEntryInterface.h
*
*
*/

#pragma once

#include "../serializer/RulePortForwardingEntryJsonObject.h"


using namespace io::swagger::server::model;

class RulePortForwardingEntryInterface {
public:

  virtual void update(const RulePortForwardingEntryJsonObject &conf) = 0;
  virtual RulePortForwardingEntryJsonObject toJsonObject() = 0;

  /// <summary>
  /// Rule identifier
  /// </summary>
  virtual uint32_t getId() = 0;

  /// <summary>
  /// External destination IP address
  /// </summary>
  virtual std::string getExternalIp() = 0;
  virtual void setExternalIp(const std::string &value) = 0;

  /// <summary>
  /// External destination L4 port
  /// </summary>
  virtual uint16_t getExternalPort() = 0;
  virtual void setExternalPort(const uint16_t &value) = 0;

  /// <summary>
  /// L4 protocol (TCP, UDP, ALL)
  /// </summary>
  virtual std::string getProto() = 0;
  virtual void setProto(const std::string &value) = 0;

  /// <summary>
  /// Internal destination IP address
  /// </summary>
  virtual std::string getInternalIp() = 0;
  virtual void setInternalIp(const std::string &value) = 0;

  /// <summary>
  /// Internal destination L4 port
  /// </summary>
  virtual uint16_t getInternalPort() = 0;
  virtual void setInternalPort(const uint16_t &value) = 0;
};
