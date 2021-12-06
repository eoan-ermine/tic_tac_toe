// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "StorageService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

class StorageServiceHandler : virtual public StorageServiceIf {
 public:
  StorageServiceHandler() {
    // Your initialization goes here
  }

  void setCell(const int64_t row, const int64_t column, const  ::CellState::type newState) {
    // Your implementation goes here
    printf("setCell\n");
  }

  void getCell( ::Cell& _return, const int64_t row, const int64_t column) {
    // Your implementation goes here
    printf("getCell\n");
  }

  int64_t getHeight() {
    // Your implementation goes here
    printf("getHeight\n");
  }

  int64_t getWidth() {
    // Your implementation goes here
    printf("getWidth\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<StorageServiceHandler> handler(new StorageServiceHandler());
  ::std::shared_ptr<TProcessor> processor(new StorageServiceProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
