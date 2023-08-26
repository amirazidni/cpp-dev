cmake_minimum_required(VERSION 3.10)

project(cpp-dev)

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build)

add_executable(00-dev basic/00-dev.cpp)

# cmake -G "Unix Makefiles" ..