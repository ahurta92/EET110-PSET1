cmake_minimum_required(VERSION 3.20)
project(CatchTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(CatchTest main.cpp tests.cpp problems.cc)
