cmake_minimum_required(VERSION 3.28)
project(HelloWorld_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloWorld_cpp
        examples.cpp
        main.cpp
        sumOfDifferences.cpp
        mainHeader.h)
