/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef cellState_TYPES_H
#define cellState_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>




struct CellState {
  enum type {
    Empty = 0,
    O = 1,
    X = 2
  };
};

extern const std::map<int, const char*> _CellState_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const CellState::type& val);

std::string to_string(const CellState::type& val);



#endif
