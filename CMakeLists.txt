cmake_minimum_required(VERSION 3.16)
project(bpttest)

set(CMAKE_CXX_FLAGS "-O3")

set(CMAKE_CXX_STANDARD 14)

add_executable(code
        main.cpp
        )
