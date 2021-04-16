/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef HomeTimelineService_H
#define HomeTimelineService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "social_network_types.h"

namespace social_network {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class HomeTimelineServiceIf {
 public:
  virtual ~HomeTimelineServiceIf() {}
  virtual void ReadHomeTimeline(std::vector<Post> & _return, const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier) = 0;
  virtual void WriteHomeTimeline(const int64_t req_id, const int64_t post_id, const int64_t user_id, const int64_t timestamp, const std::vector<int64_t> & user_mentions_id, const std::map<std::string, std::string> & carrier) = 0;
};

class HomeTimelineServiceIfFactory {
 public:
  typedef HomeTimelineServiceIf Handler;

  virtual ~HomeTimelineServiceIfFactory() {}

  virtual HomeTimelineServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(HomeTimelineServiceIf* /* handler */) = 0;
};

class HomeTimelineServiceIfSingletonFactory : virtual public HomeTimelineServiceIfFactory {
 public:
  HomeTimelineServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<HomeTimelineServiceIf>& iface) : iface_(iface) {}
  virtual ~HomeTimelineServiceIfSingletonFactory() {}

  virtual HomeTimelineServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(HomeTimelineServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<HomeTimelineServiceIf> iface_;
};

class HomeTimelineServiceNull : virtual public HomeTimelineServiceIf {
 public:
  virtual ~HomeTimelineServiceNull() {}
  void ReadHomeTimeline(std::vector<Post> & /* _return */, const int64_t /* req_id */, const int64_t /* user_id */, const int32_t /* start */, const int32_t /* stop */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
  void WriteHomeTimeline(const int64_t /* req_id */, const int64_t /* post_id */, const int64_t /* user_id */, const int64_t /* timestamp */, const std::vector<int64_t> & /* user_mentions_id */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
};

typedef struct _HomeTimelineService_ReadHomeTimeline_args__isset {
  _HomeTimelineService_ReadHomeTimeline_args__isset() : req_id(false), user_id(false), start(false), stop(false), carrier(false) {}
  bool req_id :1;
  bool user_id :1;
  bool start :1;
  bool stop :1;
  bool carrier :1;
} _HomeTimelineService_ReadHomeTimeline_args__isset;

class HomeTimelineService_ReadHomeTimeline_args {
 public:

  HomeTimelineService_ReadHomeTimeline_args(const HomeTimelineService_ReadHomeTimeline_args&);
  HomeTimelineService_ReadHomeTimeline_args& operator=(const HomeTimelineService_ReadHomeTimeline_args&);
  HomeTimelineService_ReadHomeTimeline_args() : req_id(0), user_id(0), start(0), stop(0) {
  }

  virtual ~HomeTimelineService_ReadHomeTimeline_args() throw();
  int64_t req_id;
  int64_t user_id;
  int32_t start;
  int32_t stop;
  std::map<std::string, std::string>  carrier;

  _HomeTimelineService_ReadHomeTimeline_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_user_id(const int64_t val);

  void __set_start(const int32_t val);

  void __set_stop(const int32_t val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const HomeTimelineService_ReadHomeTimeline_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(user_id == rhs.user_id))
      return false;
    if (!(start == rhs.start))
      return false;
    if (!(stop == rhs.stop))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const HomeTimelineService_ReadHomeTimeline_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HomeTimelineService_ReadHomeTimeline_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HomeTimelineService_ReadHomeTimeline_pargs {
 public:


  virtual ~HomeTimelineService_ReadHomeTimeline_pargs() throw();
  const int64_t* req_id;
  const int64_t* user_id;
  const int32_t* start;
  const int32_t* stop;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HomeTimelineService_ReadHomeTimeline_result__isset {
  _HomeTimelineService_ReadHomeTimeline_result__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _HomeTimelineService_ReadHomeTimeline_result__isset;

class HomeTimelineService_ReadHomeTimeline_result {
 public:

  HomeTimelineService_ReadHomeTimeline_result(const HomeTimelineService_ReadHomeTimeline_result&);
  HomeTimelineService_ReadHomeTimeline_result& operator=(const HomeTimelineService_ReadHomeTimeline_result&);
  HomeTimelineService_ReadHomeTimeline_result() {
  }

  virtual ~HomeTimelineService_ReadHomeTimeline_result() throw();
  std::vector<Post>  success;
  ServiceException se;

  _HomeTimelineService_ReadHomeTimeline_result__isset __isset;

  void __set_success(const std::vector<Post> & val);

  void __set_se(const ServiceException& val);

  bool operator == (const HomeTimelineService_ReadHomeTimeline_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const HomeTimelineService_ReadHomeTimeline_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HomeTimelineService_ReadHomeTimeline_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HomeTimelineService_ReadHomeTimeline_presult__isset {
  _HomeTimelineService_ReadHomeTimeline_presult__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _HomeTimelineService_ReadHomeTimeline_presult__isset;

class HomeTimelineService_ReadHomeTimeline_presult {
 public:


  virtual ~HomeTimelineService_ReadHomeTimeline_presult() throw();
  std::vector<Post> * success;
  ServiceException se;

  _HomeTimelineService_ReadHomeTimeline_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _HomeTimelineService_WriteHomeTimeline_args__isset {
  _HomeTimelineService_WriteHomeTimeline_args__isset() : req_id(false), post_id(false), user_id(false), timestamp(false), user_mentions_id(false), carrier(false) {}
  bool req_id :1;
  bool post_id :1;
  bool user_id :1;
  bool timestamp :1;
  bool user_mentions_id :1;
  bool carrier :1;
} _HomeTimelineService_WriteHomeTimeline_args__isset;

class HomeTimelineService_WriteHomeTimeline_args {
 public:

  HomeTimelineService_WriteHomeTimeline_args(const HomeTimelineService_WriteHomeTimeline_args&);
  HomeTimelineService_WriteHomeTimeline_args& operator=(const HomeTimelineService_WriteHomeTimeline_args&);
  HomeTimelineService_WriteHomeTimeline_args() : req_id(0), post_id(0), user_id(0), timestamp(0) {
  }

  virtual ~HomeTimelineService_WriteHomeTimeline_args() throw();
  int64_t req_id;
  int64_t post_id;
  int64_t user_id;
  int64_t timestamp;
  std::vector<int64_t>  user_mentions_id;
  std::map<std::string, std::string>  carrier;

  _HomeTimelineService_WriteHomeTimeline_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_post_id(const int64_t val);

  void __set_user_id(const int64_t val);

  void __set_timestamp(const int64_t val);

  void __set_user_mentions_id(const std::vector<int64_t> & val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const HomeTimelineService_WriteHomeTimeline_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(post_id == rhs.post_id))
      return false;
    if (!(user_id == rhs.user_id))
      return false;
    if (!(timestamp == rhs.timestamp))
      return false;
    if (!(user_mentions_id == rhs.user_mentions_id))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const HomeTimelineService_WriteHomeTimeline_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HomeTimelineService_WriteHomeTimeline_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HomeTimelineService_WriteHomeTimeline_pargs {
 public:


  virtual ~HomeTimelineService_WriteHomeTimeline_pargs() throw();
  const int64_t* req_id;
  const int64_t* post_id;
  const int64_t* user_id;
  const int64_t* timestamp;
  const std::vector<int64_t> * user_mentions_id;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HomeTimelineService_WriteHomeTimeline_result__isset {
  _HomeTimelineService_WriteHomeTimeline_result__isset() : se(false) {}
  bool se :1;
} _HomeTimelineService_WriteHomeTimeline_result__isset;

class HomeTimelineService_WriteHomeTimeline_result {
 public:

  HomeTimelineService_WriteHomeTimeline_result(const HomeTimelineService_WriteHomeTimeline_result&);
  HomeTimelineService_WriteHomeTimeline_result& operator=(const HomeTimelineService_WriteHomeTimeline_result&);
  HomeTimelineService_WriteHomeTimeline_result() {
  }

  virtual ~HomeTimelineService_WriteHomeTimeline_result() throw();
  ServiceException se;

  _HomeTimelineService_WriteHomeTimeline_result__isset __isset;

  void __set_se(const ServiceException& val);

  bool operator == (const HomeTimelineService_WriteHomeTimeline_result & rhs) const
  {
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const HomeTimelineService_WriteHomeTimeline_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HomeTimelineService_WriteHomeTimeline_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HomeTimelineService_WriteHomeTimeline_presult__isset {
  _HomeTimelineService_WriteHomeTimeline_presult__isset() : se(false) {}
  bool se :1;
} _HomeTimelineService_WriteHomeTimeline_presult__isset;

class HomeTimelineService_WriteHomeTimeline_presult {
 public:


  virtual ~HomeTimelineService_WriteHomeTimeline_presult() throw();
  ServiceException se;

  _HomeTimelineService_WriteHomeTimeline_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class HomeTimelineServiceClient : virtual public HomeTimelineServiceIf {
 public:
  HomeTimelineServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  HomeTimelineServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ReadHomeTimeline(std::vector<Post> & _return, const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier);
  void send_ReadHomeTimeline(const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier);
  void recv_ReadHomeTimeline(std::vector<Post> & _return);
  void WriteHomeTimeline(const int64_t req_id, const int64_t post_id, const int64_t user_id, const int64_t timestamp, const std::vector<int64_t> & user_mentions_id, const std::map<std::string, std::string> & carrier);
  void send_WriteHomeTimeline(const int64_t req_id, const int64_t post_id, const int64_t user_id, const int64_t timestamp, const std::vector<int64_t> & user_mentions_id, const std::map<std::string, std::string> & carrier);
  void recv_WriteHomeTimeline();
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class HomeTimelineServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<HomeTimelineServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (HomeTimelineServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ReadHomeTimeline(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_WriteHomeTimeline(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  HomeTimelineServiceProcessor(::apache::thrift::stdcxx::shared_ptr<HomeTimelineServiceIf> iface) :
    iface_(iface) {
    processMap_["ReadHomeTimeline"] = &HomeTimelineServiceProcessor::process_ReadHomeTimeline;
    processMap_["WriteHomeTimeline"] = &HomeTimelineServiceProcessor::process_WriteHomeTimeline;
  }

  virtual ~HomeTimelineServiceProcessor() {}
};

class HomeTimelineServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  HomeTimelineServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< HomeTimelineServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< HomeTimelineServiceIfFactory > handlerFactory_;
};

class HomeTimelineServiceMultiface : virtual public HomeTimelineServiceIf {
 public:
  HomeTimelineServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<HomeTimelineServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~HomeTimelineServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<HomeTimelineServiceIf> > ifaces_;
  HomeTimelineServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<HomeTimelineServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void ReadHomeTimeline(std::vector<Post> & _return, const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ReadHomeTimeline(_return, req_id, user_id, start, stop, carrier);
    }
    ifaces_[i]->ReadHomeTimeline(_return, req_id, user_id, start, stop, carrier);
    return;
  }

  void WriteHomeTimeline(const int64_t req_id, const int64_t post_id, const int64_t user_id, const int64_t timestamp, const std::vector<int64_t> & user_mentions_id, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->WriteHomeTimeline(req_id, post_id, user_id, timestamp, user_mentions_id, carrier);
    }
    ifaces_[i]->WriteHomeTimeline(req_id, post_id, user_id, timestamp, user_mentions_id, carrier);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class HomeTimelineServiceConcurrentClient : virtual public HomeTimelineServiceIf {
 public:
  HomeTimelineServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  HomeTimelineServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ReadHomeTimeline(std::vector<Post> & _return, const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier);
  int32_t send_ReadHomeTimeline(const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier);
  void recv_ReadHomeTimeline(std::vector<Post> & _return, const int32_t seqid);
  void WriteHomeTimeline(const int64_t req_id, const int64_t post_id, const int64_t user_id, const int64_t timestamp, const std::vector<int64_t> & user_mentions_id, const std::map<std::string, std::string> & carrier);
  int32_t send_WriteHomeTimeline(const int64_t req_id, const int64_t post_id, const int64_t user_id, const int64_t timestamp, const std::vector<int64_t> & user_mentions_id, const std::map<std::string, std::string> & carrier);
  void recv_WriteHomeTimeline(const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
