cmake_minimum_required(VERSION 3.1)
project(libTest CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_library(libTest libTest.cpp)
target_link_libraries(libTest CONAN_PKG::gtest)
