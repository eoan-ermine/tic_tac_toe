/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef gameState_TYPES_H
#define gameState_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>




struct GameState {
  enum type {
    OMove = 0,
    XMove = 1,
    OWin = 2,
    XWin = 3,
    Draw = 4
  };
};

extern const std::map<int, const char*> _GameState_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const GameState::type& val);

std::string to_string(const GameState::type& val);



#endif