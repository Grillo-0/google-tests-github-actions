cmake_minimum_required(VERSION 3.18.4)

set(this example)

project(${this} CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

enable_testing()
add_subdirectory(src)
add_subdirectory(test)

