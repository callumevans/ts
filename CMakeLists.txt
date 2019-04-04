cmake_minimum_required(VERSION 3.13)
project(travelling_salesman)

set(CMAKE_CXX_STANDARD 17)

include(./conanbuildinfo.cmake)
conan_basic_setup()

add_executable(travelling_salesman main.cpp)