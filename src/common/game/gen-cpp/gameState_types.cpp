/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "gameState_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>



int _kGameStateValues[] = {
  GameState::OMove,
  GameState::XMove,
  GameState::OWin,
  GameState::XWin,
  GameState::Draw
};
const char* _kGameStateNames[] = {
  "OMove",
  "XMove",
  "OWin",
  "XWin",
  "Draw"
};
const std::map<int, const char*> _GameState_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kGameStateValues, _kGameStateNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const GameState::type& val) {
  std::map<int, const char*>::const_iterator it = _GameState_VALUES_TO_NAMES.find(val);
  if (it != _GameState_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

std::string to_string(const GameState::type& val) {
  std::map<int, const char*>::const_iterator it = _GameState_VALUES_TO_NAMES.find(val);
  if (it != _GameState_VALUES_TO_NAMES.end()) {
    return std::string(it->second);
  } else {
    return std::to_string(static_cast<int>(val));
  }
}

