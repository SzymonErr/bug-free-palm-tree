cmake_minimum_required(VERSION 3.14)
project(learning1)

set(CMAKE_CXX_STANDARD 14)

add_executable(learning1 main.cpp base.cpp base.h derived_one.cpp derived_one.h)