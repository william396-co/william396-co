cmake_minimum_required(VERSION 2.4)

project(mainApp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(${PROJECT_SOURCE_DIR})
add_executable(mainApp main.cc util.cpp)  # be sure there's exactly one main() function in the source files
