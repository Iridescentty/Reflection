cmake_minimum_required(VERSION 3.16)
project(Reflection CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

message(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/Furniture/includes)

file(GLOB_RECURSE PROJECT_SRCS 
        ${PROJECT_SOURCE_DIR}/Furniture/srcs/*.cpp 
        ${PROJECT_SOURCE_DIR}/main.cpp)

add_executable(${PROJECT_NAME} ${PROJECT_SRCS})