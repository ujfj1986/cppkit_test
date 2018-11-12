//
//  grpc_server.h
//  cppkit
//
//  Created by 单杰晶 on 2018/11/10.
//  Copyright © 2018 shjj. All rights reserved.
//

#ifndef grpc_server_h
#define grpc_server_h

#include "headers.h"
#include "grpc_headers.h"

class GrpcServer : public AbstractServer {
    
public:
    static std::shared_ptr<GrpcServer> create();
    
    GrpcServer();
    GrpcServer(std::shared_ptr<Grpc> ins);
    ~GrpcServer();

    void start();
    
    std::shared_ptr<Grpc> mGrpc;
};

//using Grpc1Server = GrpcServer<IListener1>;
//using Grpc2Server = GrpcServer<IListener2>;

#endif /* grpc_server_h */
