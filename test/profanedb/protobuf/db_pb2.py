# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: profanedb/protobuf/db.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import any_pb2 as google_dot_protobuf_dot_any__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='profanedb/protobuf/db.proto',
  package='profanedb.protobuf',
  syntax='proto3',
  serialized_pb=_b('\n\x1bprofanedb/protobuf/db.proto\x12\x12profanedb.protobuf\x1a\x19google/protobuf/any.proto\"\x08\n\x06GetReq\"\t\n\x07GetResp\"4\n\x06PutReq\x12*\n\x0cserializable\x18\x01 \x01(\x0b\x32\x14.google.protobuf.Any\"\t\n\x07PutResp\"\x08\n\x06\x44\x65lReq\"\t\n\x07\x44\x65lResp2\xc7\x01\n\x02\x44\x62\x12>\n\x03Get\x12\x1a.profanedb.protobuf.GetReq\x1a\x1b.profanedb.protobuf.GetResp\x12>\n\x03Put\x12\x1a.profanedb.protobuf.PutReq\x1a\x1b.profanedb.protobuf.PutResp\x12\x41\n\x06\x44\x65lete\x12\x1a.profanedb.protobuf.DelReq\x1a\x1b.profanedb.protobuf.DelRespBU\n\x16\x63om.profanedb.protobufZ gitlab.com/profanedb/protobuf/db\xa2\x02\x03PDB\xaa\x02\x12ProfaneDB.Protobufb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_any__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_GETREQ = _descriptor.Descriptor(
  name='GetReq',
  full_name='profanedb.protobuf.GetReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=78,
  serialized_end=86,
)


_GETRESP = _descriptor.Descriptor(
  name='GetResp',
  full_name='profanedb.protobuf.GetResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=88,
  serialized_end=97,
)


_PUTREQ = _descriptor.Descriptor(
  name='PutReq',
  full_name='profanedb.protobuf.PutReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='serializable', full_name='profanedb.protobuf.PutReq.serializable', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=99,
  serialized_end=151,
)


_PUTRESP = _descriptor.Descriptor(
  name='PutResp',
  full_name='profanedb.protobuf.PutResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=153,
  serialized_end=162,
)


_DELREQ = _descriptor.Descriptor(
  name='DelReq',
  full_name='profanedb.protobuf.DelReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=164,
  serialized_end=172,
)


_DELRESP = _descriptor.Descriptor(
  name='DelResp',
  full_name='profanedb.protobuf.DelResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=174,
  serialized_end=183,
)

_PUTREQ.fields_by_name['serializable'].message_type = google_dot_protobuf_dot_any__pb2._ANY
DESCRIPTOR.message_types_by_name['GetReq'] = _GETREQ
DESCRIPTOR.message_types_by_name['GetResp'] = _GETRESP
DESCRIPTOR.message_types_by_name['PutReq'] = _PUTREQ
DESCRIPTOR.message_types_by_name['PutResp'] = _PUTRESP
DESCRIPTOR.message_types_by_name['DelReq'] = _DELREQ
DESCRIPTOR.message_types_by_name['DelResp'] = _DELRESP

GetReq = _reflection.GeneratedProtocolMessageType('GetReq', (_message.Message,), dict(
  DESCRIPTOR = _GETREQ,
  __module__ = 'profanedb.protobuf.db_pb2'
  # @@protoc_insertion_point(class_scope:profanedb.protobuf.GetReq)
  ))
_sym_db.RegisterMessage(GetReq)

GetResp = _reflection.GeneratedProtocolMessageType('GetResp', (_message.Message,), dict(
  DESCRIPTOR = _GETRESP,
  __module__ = 'profanedb.protobuf.db_pb2'
  # @@protoc_insertion_point(class_scope:profanedb.protobuf.GetResp)
  ))
_sym_db.RegisterMessage(GetResp)

PutReq = _reflection.GeneratedProtocolMessageType('PutReq', (_message.Message,), dict(
  DESCRIPTOR = _PUTREQ,
  __module__ = 'profanedb.protobuf.db_pb2'
  # @@protoc_insertion_point(class_scope:profanedb.protobuf.PutReq)
  ))
_sym_db.RegisterMessage(PutReq)

PutResp = _reflection.GeneratedProtocolMessageType('PutResp', (_message.Message,), dict(
  DESCRIPTOR = _PUTRESP,
  __module__ = 'profanedb.protobuf.db_pb2'
  # @@protoc_insertion_point(class_scope:profanedb.protobuf.PutResp)
  ))
_sym_db.RegisterMessage(PutResp)

DelReq = _reflection.GeneratedProtocolMessageType('DelReq', (_message.Message,), dict(
  DESCRIPTOR = _DELREQ,
  __module__ = 'profanedb.protobuf.db_pb2'
  # @@protoc_insertion_point(class_scope:profanedb.protobuf.DelReq)
  ))
_sym_db.RegisterMessage(DelReq)

DelResp = _reflection.GeneratedProtocolMessageType('DelResp', (_message.Message,), dict(
  DESCRIPTOR = _DELRESP,
  __module__ = 'profanedb.protobuf.db_pb2'
  # @@protoc_insertion_point(class_scope:profanedb.protobuf.DelResp)
  ))
_sym_db.RegisterMessage(DelResp)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\026com.profanedb.protobufZ gitlab.com/profanedb/protobuf/db\242\002\003PDB\252\002\022ProfaneDB.Protobuf'))
try:
  # THESE ELEMENTS WILL BE DEPRECATED.
  # Please use the generated *_pb2_grpc.py files instead.
  import grpc
  from grpc.beta import implementations as beta_implementations
  from grpc.beta import interfaces as beta_interfaces
  from grpc.framework.common import cardinality
  from grpc.framework.interfaces.face import utilities as face_utilities


  class DbStub(object):

    def __init__(self, channel):
      """Constructor.

      Args:
        channel: A grpc.Channel.
      """
      self.Get = channel.unary_unary(
          '/profanedb.protobuf.Db/Get',
          request_serializer=GetReq.SerializeToString,
          response_deserializer=GetResp.FromString,
          )
      self.Put = channel.unary_unary(
          '/profanedb.protobuf.Db/Put',
          request_serializer=PutReq.SerializeToString,
          response_deserializer=PutResp.FromString,
          )
      self.Delete = channel.unary_unary(
          '/profanedb.protobuf.Db/Delete',
          request_serializer=DelReq.SerializeToString,
          response_deserializer=DelResp.FromString,
          )


  class DbServicer(object):

    def Get(self, request, context):
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def Put(self, request, context):
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')

    def Delete(self, request, context):
      context.set_code(grpc.StatusCode.UNIMPLEMENTED)
      context.set_details('Method not implemented!')
      raise NotImplementedError('Method not implemented!')


  def add_DbServicer_to_server(servicer, server):
    rpc_method_handlers = {
        'Get': grpc.unary_unary_rpc_method_handler(
            servicer.Get,
            request_deserializer=GetReq.FromString,
            response_serializer=GetResp.SerializeToString,
        ),
        'Put': grpc.unary_unary_rpc_method_handler(
            servicer.Put,
            request_deserializer=PutReq.FromString,
            response_serializer=PutResp.SerializeToString,
        ),
        'Delete': grpc.unary_unary_rpc_method_handler(
            servicer.Delete,
            request_deserializer=DelReq.FromString,
            response_serializer=DelResp.SerializeToString,
        ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
        'profanedb.protobuf.Db', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


  class BetaDbServicer(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    def Get(self, request, context):
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def Put(self, request, context):
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)
    def Delete(self, request, context):
      context.code(beta_interfaces.StatusCode.UNIMPLEMENTED)


  class BetaDbStub(object):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This class was generated
    only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0."""
    def Get(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      raise NotImplementedError()
    Get.future = None
    def Put(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      raise NotImplementedError()
    Put.future = None
    def Delete(self, request, timeout, metadata=None, with_call=False, protocol_options=None):
      raise NotImplementedError()
    Delete.future = None


  def beta_create_Db_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_deserializers = {
      ('profanedb.protobuf.Db', 'Delete'): DelReq.FromString,
      ('profanedb.protobuf.Db', 'Get'): GetReq.FromString,
      ('profanedb.protobuf.Db', 'Put'): PutReq.FromString,
    }
    response_serializers = {
      ('profanedb.protobuf.Db', 'Delete'): DelResp.SerializeToString,
      ('profanedb.protobuf.Db', 'Get'): GetResp.SerializeToString,
      ('profanedb.protobuf.Db', 'Put'): PutResp.SerializeToString,
    }
    method_implementations = {
      ('profanedb.protobuf.Db', 'Delete'): face_utilities.unary_unary_inline(servicer.Delete),
      ('profanedb.protobuf.Db', 'Get'): face_utilities.unary_unary_inline(servicer.Get),
      ('profanedb.protobuf.Db', 'Put'): face_utilities.unary_unary_inline(servicer.Put),
    }
    server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
    return beta_implementations.server(method_implementations, options=server_options)


  def beta_create_Db_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
    """The Beta API is deprecated for 0.15.0 and later.

    It is recommended to use the GA API (classes and functions in this
    file not marked beta) for all further purposes. This function was
    generated only to ease transition from grpcio<0.15.0 to grpcio>=0.15.0"""
    request_serializers = {
      ('profanedb.protobuf.Db', 'Delete'): DelReq.SerializeToString,
      ('profanedb.protobuf.Db', 'Get'): GetReq.SerializeToString,
      ('profanedb.protobuf.Db', 'Put'): PutReq.SerializeToString,
    }
    response_deserializers = {
      ('profanedb.protobuf.Db', 'Delete'): DelResp.FromString,
      ('profanedb.protobuf.Db', 'Get'): GetResp.FromString,
      ('profanedb.protobuf.Db', 'Put'): PutResp.FromString,
    }
    cardinalities = {
      'Delete': cardinality.Cardinality.UNARY_UNARY,
      'Get': cardinality.Cardinality.UNARY_UNARY,
      'Put': cardinality.Cardinality.UNARY_UNARY,
    }
    stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
    return beta_implementations.dynamic_stub(channel, 'profanedb.protobuf.Db', cardinalities, options=stub_options)
except ImportError:
  pass
# @@protoc_insertion_point(module_scope)
