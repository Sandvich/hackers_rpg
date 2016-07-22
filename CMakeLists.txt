cmake_minimum_required(VERSION 3.4)
project(hackers_rpg)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#Build tool paths
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_AR "/usr/bin/ar")
set(CMAKE_LINKER "/usr/bin/g++")

set(SOURCE_FILES program.h program.cpp test.cpp playerone.h playerone.cpp)
add_executable(hackers_rpg ${SOURCE_FILES})