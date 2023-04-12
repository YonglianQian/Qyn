cmake_minimum_required(VERSION 3.24)

project(Queen)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

aux_source_directory(. SRCList)

add_executable(Queen ${SRCList})