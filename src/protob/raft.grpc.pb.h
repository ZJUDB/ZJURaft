// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: raft.proto
#ifndef GRPC_raft_2eproto__INCLUDED
#define GRPC_raft_2eproto__INCLUDED

#include "raft.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

// The greeting service definition.
class RAFT final {
 public:
  static constexpr char const* service_full_name() {
    return "RAFT";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sends a greeting
    virtual ::grpc::Status RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::RequestVoteReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::RequestVoteReply>> AsyncRequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::RequestVoteReply>>(AsyncRequestVoteRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::RequestVoteReply>> PrepareAsyncRequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::RequestVoteReply>>(PrepareAsyncRequestVoteRaw(context, request, cq));
    }
    virtual ::grpc::Status AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::AppendEntriesReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::AppendEntriesReply>> AsyncAppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::AppendEntriesReply>>(AsyncAppendEntriesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::AppendEntriesReply>> PrepareAsyncAppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::AppendEntriesReply>>(PrepareAsyncAppendEntriesRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Sends a greeting
      virtual void RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::RequestVoteReply>* AsyncRequestVoteRaw(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::RequestVoteReply>* PrepareAsyncRequestVoteRaw(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::AppendEntriesReply>* AsyncAppendEntriesRaw(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::AppendEntriesReply>* PrepareAsyncAppendEntriesRaw(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::RequestVoteReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::RequestVoteReply>> AsyncRequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::RequestVoteReply>>(AsyncRequestVoteRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::RequestVoteReply>> PrepareAsyncRequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::RequestVoteReply>>(PrepareAsyncRequestVoteRaw(context, request, cq));
    }
    ::grpc::Status AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::AppendEntriesReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>> AsyncAppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>>(AsyncAppendEntriesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>> PrepareAsyncAppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>>(PrepareAsyncAppendEntriesRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response, std::function<void(::grpc::Status)>) override;
      void RequestVote(::grpc::ClientContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      void AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response, std::function<void(::grpc::Status)>) override;
      void AppendEntries(::grpc::ClientContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::RequestVoteReply>* AsyncRequestVoteRaw(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::RequestVoteReply>* PrepareAsyncRequestVoteRaw(::grpc::ClientContext* context, const ::RequestVoteArgs& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>* AsyncAppendEntriesRaw(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::AppendEntriesReply>* PrepareAsyncAppendEntriesRaw(::grpc::ClientContext* context, const ::AppendEntriesArgs& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_RequestVote_;
    const ::grpc::internal::RpcMethod rpcmethod_AppendEntries_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sends a greeting
    virtual ::grpc::Status RequestVote(::grpc::ServerContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response);
    virtual ::grpc::Status AppendEntries(::grpc::ServerContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_RequestVote : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_RequestVote() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_RequestVote() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestVote(::grpc::ServerContext* /*context*/, const ::RequestVoteArgs* /*request*/, ::RequestVoteReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRequestVote(::grpc::ServerContext* context, ::RequestVoteArgs* request, ::grpc::ServerAsyncResponseWriter< ::RequestVoteReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AppendEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_AppendEntries() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_AppendEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendEntries(::grpc::ServerContext* /*context*/, const ::AppendEntriesArgs* /*request*/, ::AppendEntriesReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAppendEntries(::grpc::ServerContext* context, ::AppendEntriesArgs* request, ::grpc::ServerAsyncResponseWriter< ::AppendEntriesReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_RequestVote<WithAsyncMethod_AppendEntries<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_RequestVote : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_RequestVote() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::RequestVoteArgs, ::RequestVoteReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::RequestVoteArgs* request, ::RequestVoteReply* response) { return this->RequestVote(context, request, response); }));}
    void SetMessageAllocatorFor_RequestVote(
        ::grpc::MessageAllocator< ::RequestVoteArgs, ::RequestVoteReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::RequestVoteArgs, ::RequestVoteReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_RequestVote() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestVote(::grpc::ServerContext* /*context*/, const ::RequestVoteArgs* /*request*/, ::RequestVoteReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* RequestVote(
      ::grpc::CallbackServerContext* /*context*/, const ::RequestVoteArgs* /*request*/, ::RequestVoteReply* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_AppendEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_AppendEntries() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::AppendEntriesArgs, ::AppendEntriesReply>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::AppendEntriesArgs* request, ::AppendEntriesReply* response) { return this->AppendEntries(context, request, response); }));}
    void SetMessageAllocatorFor_AppendEntries(
        ::grpc::MessageAllocator< ::AppendEntriesArgs, ::AppendEntriesReply>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::AppendEntriesArgs, ::AppendEntriesReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_AppendEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendEntries(::grpc::ServerContext* /*context*/, const ::AppendEntriesArgs* /*request*/, ::AppendEntriesReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* AppendEntries(
      ::grpc::CallbackServerContext* /*context*/, const ::AppendEntriesArgs* /*request*/, ::AppendEntriesReply* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_RequestVote<WithCallbackMethod_AppendEntries<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_RequestVote : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_RequestVote() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_RequestVote() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestVote(::grpc::ServerContext* /*context*/, const ::RequestVoteArgs* /*request*/, ::RequestVoteReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AppendEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_AppendEntries() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_AppendEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendEntries(::grpc::ServerContext* /*context*/, const ::AppendEntriesArgs* /*request*/, ::AppendEntriesReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_RequestVote : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_RequestVote() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_RequestVote() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestVote(::grpc::ServerContext* /*context*/, const ::RequestVoteArgs* /*request*/, ::RequestVoteReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRequestVote(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_AppendEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_AppendEntries() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_AppendEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendEntries(::grpc::ServerContext* /*context*/, const ::AppendEntriesArgs* /*request*/, ::AppendEntriesReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAppendEntries(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_RequestVote : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_RequestVote() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->RequestVote(context, request, response); }));
    }
    ~WithRawCallbackMethod_RequestVote() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RequestVote(::grpc::ServerContext* /*context*/, const ::RequestVoteArgs* /*request*/, ::RequestVoteReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* RequestVote(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_AppendEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_AppendEntries() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->AppendEntries(context, request, response); }));
    }
    ~WithRawCallbackMethod_AppendEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AppendEntries(::grpc::ServerContext* /*context*/, const ::AppendEntriesArgs* /*request*/, ::AppendEntriesReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* AppendEntries(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_RequestVote : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_RequestVote() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::RequestVoteArgs, ::RequestVoteReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::RequestVoteArgs, ::RequestVoteReply>* streamer) {
                       return this->StreamedRequestVote(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_RequestVote() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status RequestVote(::grpc::ServerContext* /*context*/, const ::RequestVoteArgs* /*request*/, ::RequestVoteReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRequestVote(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::RequestVoteArgs,::RequestVoteReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AppendEntries : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_AppendEntries() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::AppendEntriesArgs, ::AppendEntriesReply>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::AppendEntriesArgs, ::AppendEntriesReply>* streamer) {
                       return this->StreamedAppendEntries(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_AppendEntries() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AppendEntries(::grpc::ServerContext* /*context*/, const ::AppendEntriesArgs* /*request*/, ::AppendEntriesReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAppendEntries(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::AppendEntriesArgs,::AppendEntriesReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_RequestVote<WithStreamedUnaryMethod_AppendEntries<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_RequestVote<WithStreamedUnaryMethod_AppendEntries<Service > > StreamedService;
};


#endif  // GRPC_raft_2eproto__INCLUDED
