cmake_minimum_required(VERSION 3.26)
project(Helloworld)

set(CMAKE_CXX_STANDARD 20)

add_executable(Helloworld main.cpp
        log.cpp
        EndBrace.h
        math.cpp
        log.h)
