//
//  headers.h
//  cppkit
//
//  Created by 单杰晶 on 2018/11/10.
//  Copyright © 2018 shjj. All rights reserved.
//

#ifndef headers_h
#define headers_h

#include <iostream>

class AbstractServer {
public:
    AbstractServer() = default;
    virtual ~AbstractServer() {}
    
    virtual void start() {
        std::cout << "in AbstractServer.start" << std::endl;
    }
    
    virtual void stop() {
        std::cout << "in AbstractServer.stop" << std::endl;
    }
};

template <typename Listener>
class ListenerRegister {
    
public:
    ListenerRegister() = default;
    virtual ~ListenerRegister() {}
    
    void registerListener(std::shared_ptr<Listener> listener) {
        std::cout << "in registerListener" << std::endl;
        this->mListener = listener;
    }
    void unregisterListener() {
        std::cout << "in unregisterListener" << std::endl;
        this->mListener = nullptr;
    }
    
    std::shared_ptr<Listener> mListener;
};

class IListener1 {
    
public:
    IListener1() = default;
    virtual ~IListener1() {}
    
    virtual void onEvent1() = 0;
    virtual void onEvent2() = 0;
};

class IListener2 {
    
public:
    IListener2() = default;
    virtual ~IListener2() {}
    
    virtual void onEvent3() = 0;
    virtual void onEvent4() = 0;
};

#endif /* headers_h */
