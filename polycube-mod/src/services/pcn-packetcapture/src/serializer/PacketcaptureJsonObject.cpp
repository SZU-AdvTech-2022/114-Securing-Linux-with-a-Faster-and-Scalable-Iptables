/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "PacketcaptureJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

PacketcaptureJsonObject::PacketcaptureJsonObject() {
  m_nameIsSet = false;
  m_capture = PacketcaptureCaptureEnum::OFF;
  m_captureIsSet = true;
  m_anonimize = false;
  m_anonimizeIsSet = true;
  m_dumpIsSet = false;
  m_networkmode = false;
  m_networkmodeIsSet = true;
  m_snaplenIsSet = false;
  m_filterIsSet = false;
  m_globalheaderIsSet = false;
  m_packetIsSet = false;
}

PacketcaptureJsonObject::PacketcaptureJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_nameIsSet = false;
  m_captureIsSet = false;
  m_anonimizeIsSet = false;
  m_dumpIsSet = false;
  m_networkmodeIsSet = false;
  m_snaplenIsSet = false;
  m_filterIsSet = false;
  m_globalheaderIsSet = false;
  m_packetIsSet = false;


  if (val.count("name")) {
    setName(val.at("name").get<std::string>());
  }

  if (val.count("capture")) {
    setCapture(string_to_PacketcaptureCaptureEnum(val.at("capture").get<std::string>()));
  }

  if (val.count("anonimize")) {
    setAnonimize(val.at("anonimize").get<bool>());
  }

  if (val.count("dump")) {
    setDump(val.at("dump").get<std::string>());
  }

  if (val.count("networkmode")) {
    setNetworkmode(val.at("networkmode").get<bool>());
  }

  if (val.count("snaplen")) {
    setSnaplen(val.at("snaplen").get<uint32_t>());
  }

  if (val.count("filter")) {
    setFilter(val.at("filter").get<std::string>());
  }

  if (val.count("globalheader")) {
    if (!val["globalheader"].is_null()) {
      GlobalheaderJsonObject newItem { val["globalheader"] };
      setGlobalheader(newItem);
    }
  }

  if (val.count("packet")) {
    if (!val["packet"].is_null()) {
      PacketJsonObject newItem { val["packet"] };
      setPacket(newItem);
    }
  }
}

nlohmann::json PacketcaptureJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_captureIsSet) {
    val["capture"] = PacketcaptureCaptureEnum_to_string(m_capture);
  }

  if (m_anonimizeIsSet) {
    val["anonimize"] = m_anonimize;
  }

  if (m_dumpIsSet) {
    val["dump"] = m_dump;
  }

  if (m_networkmodeIsSet) {
    val["networkmode"] = m_networkmode;
  }

  if (m_snaplenIsSet) {
    val["snaplen"] = m_snaplen;
  }

  if (m_filterIsSet) {
    val["filter"] = m_filter;
  }

  if (m_globalheaderIsSet) {
    val["globalheader"] = JsonObjectBase::toJson(m_globalheader);
  }

  if (m_packetIsSet) {
    val["packet"] = JsonObjectBase::toJson(m_packet);
  }

  return val;
}

std::string PacketcaptureJsonObject::getName() const {
  return m_name;
}

void PacketcaptureJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool PacketcaptureJsonObject::nameIsSet() const {
  return m_nameIsSet;
}



PacketcaptureCaptureEnum PacketcaptureJsonObject::getCapture() const {
  return m_capture;
}

void PacketcaptureJsonObject::setCapture(PacketcaptureCaptureEnum value) {
  m_capture = value;
  m_captureIsSet = true;
}

bool PacketcaptureJsonObject::captureIsSet() const {
  return m_captureIsSet;
}

void PacketcaptureJsonObject::unsetCapture() {
  m_captureIsSet = false;
}

std::string PacketcaptureJsonObject::PacketcaptureCaptureEnum_to_string(const PacketcaptureCaptureEnum &value){
  switch(value) {
    case PacketcaptureCaptureEnum::INGRESS:
      return std::string("ingress");
    case PacketcaptureCaptureEnum::EGRESS:
      return std::string("egress");
    case PacketcaptureCaptureEnum::BIDIRECTIONAL:
      return std::string("bidirectional");
    case PacketcaptureCaptureEnum::OFF:
      return std::string("off");
    default:
      throw std::runtime_error("Bad Packetcapture capture");
  }
}

PacketcaptureCaptureEnum PacketcaptureJsonObject::string_to_PacketcaptureCaptureEnum(const std::string &str){
  if (JsonObjectBase::iequals("ingress", str))
    return PacketcaptureCaptureEnum::INGRESS;
  if (JsonObjectBase::iequals("egress", str))
    return PacketcaptureCaptureEnum::EGRESS;
  if (JsonObjectBase::iequals("bidirectional", str))
    return PacketcaptureCaptureEnum::BIDIRECTIONAL;
  if (JsonObjectBase::iequals("off", str))
    return PacketcaptureCaptureEnum::OFF;
  throw std::runtime_error("Packetcapture capture is invalid");
}
bool PacketcaptureJsonObject::getAnonimize() const {
  return m_anonimize;
}

void PacketcaptureJsonObject::setAnonimize(bool value) {
  m_anonimize = value;
  m_anonimizeIsSet = true;
}

bool PacketcaptureJsonObject::anonimizeIsSet() const {
  return m_anonimizeIsSet;
}

void PacketcaptureJsonObject::unsetAnonimize() {
  m_anonimizeIsSet = false;
}

std::string PacketcaptureJsonObject::getDump() const {
  return m_dump;
}

void PacketcaptureJsonObject::setDump(std::string value) {
  m_dump = value;
  m_dumpIsSet = true;
}

bool PacketcaptureJsonObject::dumpIsSet() const {
  return m_dumpIsSet;
}

void PacketcaptureJsonObject::unsetDump() {
  m_dumpIsSet = false;
}

bool PacketcaptureJsonObject::getNetworkmode() const {
  return m_networkmode;
}

void PacketcaptureJsonObject::setNetworkmode(bool value) {
  m_networkmode = value;
  m_networkmodeIsSet = true;
}

bool PacketcaptureJsonObject::networkmodeIsSet() const {
  return m_networkmodeIsSet;
}

void PacketcaptureJsonObject::unsetNetworkmode() {
  m_networkmodeIsSet = false;
}

uint32_t PacketcaptureJsonObject::getSnaplen() const {
  return m_snaplen;
}

void PacketcaptureJsonObject::setSnaplen(uint32_t value) {
  m_snaplen = value;
  m_snaplenIsSet = true;
}

bool PacketcaptureJsonObject::snaplenIsSet() const {
  return m_snaplenIsSet;
}

void PacketcaptureJsonObject::unsetSnaplen() {
  m_snaplenIsSet = false;
}

std::string PacketcaptureJsonObject::getFilter() const {
  return m_filter;
}

void PacketcaptureJsonObject::setFilter(std::string value) {
  m_filter = value;
  m_filterIsSet = true;
}

bool PacketcaptureJsonObject::filterIsSet() const {
  return m_filterIsSet;
}

void PacketcaptureJsonObject::unsetFilter() {
  m_filterIsSet = false;
}

GlobalheaderJsonObject PacketcaptureJsonObject::getGlobalheader() const {
  return m_globalheader;
}

void PacketcaptureJsonObject::setGlobalheader(GlobalheaderJsonObject value) {
  m_globalheader = value;
  m_globalheaderIsSet = true;
}

bool PacketcaptureJsonObject::globalheaderIsSet() const {
  return m_globalheaderIsSet;
}

void PacketcaptureJsonObject::unsetGlobalheader() {
  m_globalheaderIsSet = false;
}

PacketJsonObject PacketcaptureJsonObject::getPacket() const {
  return m_packet;
}

void PacketcaptureJsonObject::setPacket(PacketJsonObject value) {
  m_packet = value;
  m_packetIsSet = true;
}

bool PacketcaptureJsonObject::packetIsSet() const {
  return m_packetIsSet;
}

void PacketcaptureJsonObject::unsetPacket() {
  m_packetIsSet = false;
}


}
}
}
