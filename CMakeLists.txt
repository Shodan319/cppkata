cmake_minimum_required(VERSION 3.14)
project(Kata)

set(CMAKE_CXX_STANDARD 17)

add_library(Kata checkout_order.cpp checkout_order.h)
target_include_directories(Kata PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

enable_testing()

add_subdirectory(unittests)