// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: raft.proto

#include "raft.pb.h"
#include "raft.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>

static const char* RAFT_method_names[] = {
  "/RAFT/RequestVote",
  "/RAFT/AppendEntries",
};

std::unique_ptr< RAFT::Stub> RAFT::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RAFT::Stub> stub(new RAFT::Stub(channel, options));
  return stub;
}

RAFT::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_RequestVote_(RAFT_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AppendEntries_(RAFT_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RAFT::Stub::RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::RequestVoteReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::RequestVoteArgs, ::RequestVoteReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RequestVote_, context, request, response);
}

void RAFT::Stub::async::RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::RequestVoteArgs, ::RequestVoteReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RequestVote_, context, request, response, std::move(f));
}

void RAFT::Stub::async::RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RequestVote_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::RequestVoteReply>* RAFT::Stub::PrepareAsyncRequestVoteRaw(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::RequestVoteReply, ::RequestVoteArgs, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RequestVote_, context, request);
}

::grpc::ClientAsyncResponseReader< ::RequestVoteReply>* RAFT::Stub::AsyncRequestVoteRaw(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRequestVoteRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RAFT::Stub::AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::AppendEntriesReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::AppendEntriesArgs, ::AppendEntriesReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AppendEntries_, context, request, response);
}

void RAFT::Stub::async::AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::AppendEntriesArgs, ::AppendEntriesReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AppendEntries_, context, request, response, std::move(f));
}

void RAFT::Stub::async::AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AppendEntries_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>* RAFT::Stub::PrepareAsyncAppendEntriesRaw(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::AppendEntriesReply, ::AppendEntriesArgs, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AppendEntries_, context, request);
}

::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>* RAFT::Stub::AsyncAppendEntriesRaw(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAppendEntriesRaw(context, request, cq);
  result->StartCall();
  return result;
}

RAFT::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RAFT_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RAFT::Service, ::RequestVoteArgs, ::RequestVoteReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RAFT::Service* service,
             ::grpc::ServerContext* ctx,
             const ::RequestVoteArgs* req,
             ::RequestVoteReply* resp) {
               return service->RequestVote(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RAFT_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RAFT::Service, ::AppendEntriesArgs, ::AppendEntriesReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RAFT::Service* service,
             ::grpc::ServerContext* ctx,
             const ::AppendEntriesArgs* req,
             ::AppendEntriesReply* resp) {
               return service->AppendEntries(ctx, req, resp);
             }, this)));
}

RAFT::Service::~Service() {
}

::grpc::Status RAFT::Service::RequestVote(::grpc::ServerContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RAFT::Service::AppendEntries(::grpc::ServerContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


