//
//  grpc_impl.h
//  cppkit
//
//  Created by 单杰晶 on 2018/11/10.
//  Copyright © 2018 shjj. All rights reserved.
//

#ifndef grpc_impl_h
#define grpc_impl_h

#include "grpc_headers.h"
#include "headers.h"

#include <iostream>

class Grpc1Impl : public IGrpc1 , public Grpc{
    
public:
    Grpc1Impl() = default;
    Grpc1Impl(std::shared_ptr<IListener1> listener) {
        std::cout << "in Grpc1Impl.Grpc1Impl" << std::endl;
        this->mListener = listener;
    }
    ~Grpc1Impl() = default;
    
    std::shared_ptr<IListener1> mListener;
    
    void setListener(std::shared_ptr<IListener1> listener) {
        std::cout << "in Grpc1Impl.setListener" << std::endl;
        this->mListener = listener;
    }
    
    void interface1() {
        std::cout << "in Grpc1Impl.interface1" << std::endl;
        if (nullptr != this->mListener) {
            this->mListener->onEvent1();
        }
    }
    
    void interface2() {
        std::cout << "in Grpc1Impl.interface2" << std::endl;
        if (nullptr != this->mListener) {
            this->mListener->onEvent2();
        }
    }

    void run() {
        std::cout << "in Grpc1Impl.run" << std::endl;
        for (int i = 0; i < 10; i++) {
            this->interface1();
            this->interface2();
        }
    }
};

class Grpc2Impl : public IGrpc2 , public Grpc{
    
public:
    Grpc2Impl() = default;
    Grpc2Impl(std::shared_ptr<IListener2> listener) {
        std::cout << "in Grpc2Impl.Grpc2Impl" << std::endl;
        this->mListener = listener;
    }
    ~Grpc2Impl() = default;
    
    std::shared_ptr<IListener2> mListener;
    
    void setListener(std::shared_ptr<IListener2> listener) {
        std::cout << "in Grpc1Impl.setListener" << std::endl;
        this->mListener = listener;
    }
    
    void interface3() {
        std::cout << "in Grpc2Impl.interface3" << std::endl;
        if (nullptr != this->mListener) {
            this->mListener->onEvent3();
        }
    }
    
    void interface4() {
        std::cout << "in Grpc2Impl.interface4" << std::endl;
        if (nullptr != this->mListener) {
            this->mListener->onEvent4();
        }
    }

    void run() {
        std::cout << "in Grpc2Impl.run" << std::endl;
        for (int i = 0; i < 10; i++) {
            this->interface3();
            this->interface4();
        }
    }
};

#endif /* grpc_impl_h */
