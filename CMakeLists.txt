cmake_minimum_required(VERSION 3.25)
project(object_adapter)

set(CMAKE_CXX_STANDARD 23)

add_executable(object_adapter main.cpp include/Adaptee.hpp src/Adaptee.cpp include/Adapter.hpp src/Adapter.cpp include/Target.hpp src/Target.cpp)
