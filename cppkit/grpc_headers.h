//
//  grpc_headers.h
//  cppkit
//
//  Created by 单杰晶 on 2018/11/10.
//  Copyright © 2018 shjj. All rights reserved.
//

#ifndef grpc_headers_h
#define grpc_headers_h

class Grpc {
public:
    virtual void run() = 0;
};

class IGrpc1 {
    
public:
    IGrpc1() = default;
    virtual ~IGrpc1() {}
    
    virtual void interface1() = 0;
    virtual void interface2() = 0;
};

class IGrpc2 {
    
public:
    IGrpc2() = default;
    virtual ~IGrpc2() {}
    
    virtual void interface3() = 0;
    virtual void interface4() = 0;
};

#endif /* grpc_headers_h */
