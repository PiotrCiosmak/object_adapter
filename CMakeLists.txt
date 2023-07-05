cmake_minimum_required(VERSION 3.25)
project(object_adapter)

set(CMAKE_CXX_STANDARD 23)

add_executable(object_adapter main.cpp src/target/Target.cpp src/adaptee/Adaptee.cpp src/adapter/Adapter.cpp)
