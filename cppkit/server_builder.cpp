
#include "headers.h"
#include "grpc_impl.h"
#include "grpc_server.h"

std::shared_ptr<AbstractServer> ServerBuilder::create(std::shared_ptr<IListener1> listener) {
    std::shared_ptr<Grpc> instance{new Grpc1Impl(listener)};
    std::shared_ptr<AbstractServer> server(new GrpcServer(instance));
    return server;
}

std::shared_ptr<AbstractServer> ServerBuilder::create(std::shared_ptr<IListener2> listener) {
    std::shared_ptr<Grpc> instance(new Grpc2Impl(listener));
    std::shared_ptr<AbstractServer> server(new GrpcServer(instance));
    return server;
}