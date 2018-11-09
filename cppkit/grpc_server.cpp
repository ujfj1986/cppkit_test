//
//  grpc_server.cpp
//  cppkit
//
//  Created by 单杰晶 on 2018/11/10.
//  Copyright © 2018 shjj. All rights reserved.
//

#include <stdio.h>
#include "grpc_server.h"
#include "grpc_headers.h"
#include "grpc_impl.h"

template<typename Listener>
GrpcServer<Listener>::GrpcServer() {
    std::cout << "in template GrpcServer.GrpcServer" << std::endl;
}

template <typename Listener>
GrpcServer<Listener>::~GrpcServer() {
    std::cout << "in template GrpcServer.~GrpcServer" << std::endl;
}

template <typename Listener>
std::shared_ptr<GrpcServer<Listener>> GrpcServer<Listener>::create() {
    return std::shared_ptr<GrpcServer<Listener>>(new GrpcServer<Listener>);
}

#if 0
template<> class GrpcServer<IListener1> {
    
public:
    //std::shared_ptr<Grpc> mGrpc;
    
    GrpcServer() {
        std::cout << "in GrpcServer<IListener1>.GrpcServer" << std::endl;
        this->mGrpc = new Grpc1Impl();
    }
};

template<> class GrpcServer<IListener2> {
    
public:
    //std::shared_ptr<Grpc> mGrpc;
};
#endif
