/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/lib/thrift/gen-cpp2/reflection_types.h"

#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>
#include <thrift/lib/cpp2/gen/module_types_tcc.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/ProtocolReaderStructReadState.h>

namespace apache { namespace thrift { namespace reflection {

}}} // apache::thrift::reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift

namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::apache::thrift::reflection::StructField> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};
template <>
struct TccStructTraits<::apache::thrift::reflection::DataType> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};
template <>
struct TccStructTraits<::apache::thrift::reflection::Schema> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache { namespace thrift { namespace reflection {

template <class Protocol_>
void StructField::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_BOOL))) {
    goto _loop;
  }
_readField_isRequired:
  {
    iprot->readBool(this->isRequired);
    this->__isset.isRequired = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_type:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::read(*iprot, this->type);
    this->__isset.type = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    iprot->readString(this->name);
    this->__isset.name = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_annotations:
  {
    this->annotations = std::unordered_map<std::string, std::string>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::read(*iprot, this->annotations);
    this->__isset.annotations = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_I16))) {
    goto _loop;
  }
_readField_order:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::read(*iprot, this->order);
    this->__isset.order = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    apache::thrift::detail::TccStructTraits<StructField>::translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_BOOL))) {
        goto _readField_isRequired;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_type;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_annotations;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I16))) {
        goto _readField_order;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t StructField::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructField");
  xfer += prot_->serializedFieldSize("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->isRequired);
  xfer += prot_->serializedFieldSize("type", apache::thrift::protocol::T_I64, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->type);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(this->name);
  if (this->__isset.annotations) {
    xfer += prot_->serializedFieldSize("annotations", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::serializedSize<false>(*prot_, this->annotations);
  }
  xfer += prot_->serializedFieldSize("order", apache::thrift::protocol::T_I16, 5);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->order);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructField::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructField");
  xfer += prot_->serializedFieldSize("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->serializedSizeBool(this->isRequired);
  xfer += prot_->serializedFieldSize("type", apache::thrift::protocol::T_I64, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->type);
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->serializedSizeString(this->name);
  if (this->__isset.annotations) {
    xfer += prot_->serializedFieldSize("annotations", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::serializedSize<false>(*prot_, this->annotations);
  }
  xfer += prot_->serializedFieldSize("order", apache::thrift::protocol::T_I16, 5);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::serializedSize<false>(*prot_, this->order);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructField::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("StructField");
  xfer += prot_->writeFieldBegin("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += prot_->writeBool(this->isRequired);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("type", apache::thrift::protocol::T_I64, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::write(*prot_, this->type);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 3);
  xfer += prot_->writeString(this->name);
  xfer += prot_->writeFieldEnd();
  if (this->__isset.annotations) {
    xfer += prot_->writeFieldBegin("annotations", apache::thrift::protocol::T_MAP, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::string>, std::unordered_map<std::string, std::string>>::write(*prot_, this->annotations);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldBegin("order", apache::thrift::protocol::T_I16, 5);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int16_t>::write(*prot_, this->order);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void StructField::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t StructField::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t StructField::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t StructField::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void StructField::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t StructField::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t StructField::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t StructField::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // apache::thrift::reflection
namespace apache { namespace thrift { namespace reflection {

template <class Protocol_>
void DataType::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_STRING))) {
    goto _loop;
  }
_readField_name:
  {
    iprot->readString(this->name);
    this->__isset.name = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_fields:
  {
    this->fields = std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>>::read(*iprot, this->fields);
    this->__isset.fields = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_mapKeyType:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::read(*iprot, this->mapKeyType);
    this->__isset.mapKeyType = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_I64))) {
    goto _loop;
  }
_readField_valueType:
  {
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::read(*iprot, this->valueType);
    this->__isset.valueType = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_enumValues:
  {
    this->enumValues = std::unordered_map<std::string, int32_t>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::read(*iprot, this->enumValues);
    this->__isset.enumValues = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    apache::thrift::detail::TccStructTraits<DataType>::translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRING))) {
        goto _readField_name;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_fields;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_mapKeyType;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I64))) {
        goto _readField_valueType;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_enumValues;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t DataType::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("DataType");
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->name);
  if (this->__isset.fields) {
    xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>>::serializedSize<false>(*prot_, this->fields);
  }
  if (this->__isset.mapKeyType) {
    xfer += prot_->serializedFieldSize("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->mapKeyType);
  }
  if (this->__isset.valueType) {
    xfer += prot_->serializedFieldSize("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->valueType);
  }
  if (this->__isset.enumValues) {
    xfer += prot_->serializedFieldSize("enumValues", apache::thrift::protocol::T_MAP, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::serializedSize<false>(*prot_, this->enumValues);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t DataType::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("DataType");
  xfer += prot_->serializedFieldSize("name", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->name);
  if (this->__isset.fields) {
    xfer += prot_->serializedFieldSize("fields", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>>::serializedSize<false>(*prot_, this->fields);
  }
  if (this->__isset.mapKeyType) {
    xfer += prot_->serializedFieldSize("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->mapKeyType);
  }
  if (this->__isset.valueType) {
    xfer += prot_->serializedFieldSize("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::serializedSize<false>(*prot_, this->valueType);
  }
  if (this->__isset.enumValues) {
    xfer += prot_->serializedFieldSize("enumValues", apache::thrift::protocol::T_MAP, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::serializedSize<false>(*prot_, this->enumValues);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t DataType::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("DataType");
  xfer += prot_->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->name);
  xfer += prot_->writeFieldEnd();
  if (this->__isset.fields) {
    xfer += prot_->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int16_t,  ::apache::thrift::reflection::StructField>>::write(*prot_, this->fields);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.mapKeyType) {
    xfer += prot_->writeFieldBegin("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::write(*prot_, this->mapKeyType);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.valueType) {
    xfer += prot_->writeFieldBegin("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::integral, int64_t>::write(*prot_, this->valueType);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.enumValues) {
    xfer += prot_->writeFieldBegin("enumValues", apache::thrift::protocol::T_MAP, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int32_t>>::write(*prot_, this->enumValues);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void DataType::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t DataType::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t DataType::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t DataType::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void DataType::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t DataType::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t DataType::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t DataType::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // apache::thrift::reflection
namespace apache { namespace thrift { namespace reflection {

template <class Protocol_>
void Schema::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_dataTypes:
  {
    this->dataTypes = std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>>::read(*iprot, this->dataTypes);
    this->__isset.dataTypes = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_MAP))) {
    goto _loop;
  }
_readField_names:
  {
    this->names = std::unordered_map<std::string, int64_t>();
    ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::read(*iprot, this->names);
    this->__isset.names = true;
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  if (_readState.fieldType == apache::thrift::protocol::T_STOP) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    apache::thrift::detail::TccStructTraits<Schema>::translateFieldName(_readState.fieldName(), _readState.fieldId, _readState.fieldType);
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_dataTypes;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_MAP))) {
        goto _readField_names;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      iprot->skip(_readState.fieldType);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Schema::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("dataTypes", apache::thrift::protocol::T_MAP, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>>::serializedSize<false>(*prot_, this->dataTypes);
  xfer += prot_->serializedFieldSize("names", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::serializedSize<false>(*prot_, this->names);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Schema");
  xfer += prot_->serializedFieldSize("dataTypes", apache::thrift::protocol::T_MAP, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>>::serializedSize<false>(*prot_, this->dataTypes);
  xfer += prot_->serializedFieldSize("names", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::serializedSize<false>(*prot_, this->names);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Schema::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Schema");
  xfer += prot_->writeFieldBegin("dataTypes", apache::thrift::protocol::T_MAP, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::structure>, std::unordered_map<int64_t,  ::apache::thrift::reflection::DataType>>::write(*prot_, this->dataTypes);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("names", apache::thrift::protocol::T_MAP, 2);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>, std::unordered_map<std::string, int64_t>>::write(*prot_, this->names);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Schema::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Schema::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Schema::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Schema::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Schema::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Schema::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Schema::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Schema::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // apache::thrift::reflection
