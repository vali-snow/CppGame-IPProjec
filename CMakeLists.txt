cmake_minimum_required(VERSION 3.6)
project(CppGame-IPProjec)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp menu.h MazeMap.h Story.h Movement.h GlobalVariables.h)
add_executable(CppGame-IPProjec ${SOURCE_FILES})