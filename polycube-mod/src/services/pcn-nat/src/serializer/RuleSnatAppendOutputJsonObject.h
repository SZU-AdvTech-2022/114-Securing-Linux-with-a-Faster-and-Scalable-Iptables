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
* RuleSnatAppendOutputJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  RuleSnatAppendOutputJsonObject : public JsonObjectBase {
public:
  RuleSnatAppendOutputJsonObject();
  RuleSnatAppendOutputJsonObject(const nlohmann::json &json);
  ~RuleSnatAppendOutputJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  ///
  /// </summary>
  uint32_t getId() const;
  void setId(uint32_t value);
  bool idIsSet() const;
  void unsetId();

private:
  uint32_t m_id;
  bool m_idIsSet;
};

}
}
}
}
