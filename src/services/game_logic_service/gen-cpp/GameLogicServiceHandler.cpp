// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "GameLogicService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

class GameLogicServiceHandler : virtual public GameLogicServiceIf {
 public:
  GameLogicServiceHandler() {
    // Your initialization goes here
  }

  void move(const int64_t row, const int64_t column) {
    // Your implementation goes here
    printf("move\n");
  }

   ::GameState::type getState() {
    // Your implementation goes here
    printf("getState\n");
  }

  bool isGameEnd() {
    // Your implementation goes here
    printf("isGameEnd\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<GameLogicServiceHandler> handler(new GameLogicServiceHandler());
  ::std::shared_ptr<TProcessor> processor(new GameLogicServiceProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

