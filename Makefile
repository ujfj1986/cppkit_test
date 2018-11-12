
SRC= main.cpp \
	grpc_server.cpp

cppkit_test: main.o grpc_server.o server_builder.o
	$(CXX) $^ $(LDFLAGS) -o $@

%.o: ./cppkit/%.cpp
	$(CXX) -c $^ $(CPPFLAGS) $(CXXFLAGS) $(LDFLAGS) -o $@
