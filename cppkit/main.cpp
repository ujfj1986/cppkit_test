//
//  main.cpp
//  cppkit
//
//  Created by 单杰晶 on 2018/11/10.
//  Copyright © 2018 shjj. All rights reserved.
//

#include <iostream>
#include "headers.h"
#include "grpc_server.h"

class Listener1Impl : public IListener1 {
public:
    void onEvent1() {
        std::cout << "in Listener1Impl.onEvent1" << std::endl;
    }
    void onEvent2() {
        std::cout << "in Listener1Impl.onEvent2" << std::endl;
    }
};

class Listener2Impl : public IListener2 {
public:
    void onEvent3() {
        std::cout << "in Listener2Impl.onEvent3" << std::endl;
    }
    void onEvent4() {
        std::cout << "in Listener2Impl.onEvent4" << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Grpc1Server server1;
    Grpc2Server server2;
    
    std::shared_ptr<IListener1> listener1(new Listener1Impl);
    std::shared_ptr<IListener2> listener2(new Listener2Impl);
    
    server1.registerListener(listener1);
    server2.registerListener(listener2);
    
    server1.start();
    server2.start();
    
    return 0;
}
