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
* RuleDnatJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "RuleDnatEntryJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  RuleDnatJsonObject : public JsonObjectBase {
public:
  RuleDnatJsonObject();
  RuleDnatJsonObject(const nlohmann::json &json);
  ~RuleDnatJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// List of Destination NAT rules
  /// </summary>
  const std::vector<RuleDnatEntryJsonObject>& getEntry() const;
  void addRuleDnatEntry(RuleDnatEntryJsonObject value);
  bool entryIsSet() const;
  void unsetEntry();

private:
  std::vector<RuleDnatEntryJsonObject> m_entry;
  bool m_entryIsSet;
};

}
}
}
}
