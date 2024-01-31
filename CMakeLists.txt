cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(VCPKG_BUILD_TYPE Debug)
set(CMAKE_CXX_CLANG_TIDY clang-tidy)

project(poem)

add_library(module STATIC src/module/message.cpp src/module/message.h)

add_executable(poem src/main.cpp)
target_include_directories(poem PRIVATE src)
target_link_libraries(poem PRIVATE module)

enable_testing()
find_package(GTest CONFIG REQUIRED)

add_executable(main_test tests/module/message_test.cpp)
target_link_libraries(main_test PRIVATE GTest::gtest_main module)
target_include_directories(main_test PRIVATE src)

include(GoogleTest)
gtest_discover_tests(main_test)