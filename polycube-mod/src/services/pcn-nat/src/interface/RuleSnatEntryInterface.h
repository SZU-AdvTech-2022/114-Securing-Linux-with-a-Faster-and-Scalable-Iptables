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
* RuleSnatEntryInterface.h
*
*
*/

#pragma once

#include "../serializer/RuleSnatEntryJsonObject.h"


using namespace io::swagger::server::model;

class RuleSnatEntryInterface {
public:

  virtual void update(const RuleSnatEntryJsonObject &conf) = 0;
  virtual RuleSnatEntryJsonObject toJsonObject() = 0;

  /// <summary>
  /// Rule identifier
  /// </summary>
  virtual uint32_t getId() = 0;

  /// <summary>
  /// Internal IP address (or subnet)
  /// </summary>
  virtual std::string getInternalNet() = 0;
  virtual void setInternalNet(const std::string &value) = 0;

  /// <summary>
  /// Natted source IP address
  /// </summary>
  virtual std::string getExternalIp() = 0;
  virtual void setExternalIp(const std::string &value) = 0;
};
