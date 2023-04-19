CMAKE_MINIMUM_REQUIRED(VERSION 3.24)

Project(Queen1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

aux_source_directory(. SRCList)

add_executable(Queen1 ${SRCList})