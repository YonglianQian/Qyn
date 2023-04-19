CMAKE_MINIMUM_REQUIRED(VERSION 3.24)

Project(Algorithm)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

aux_source_directory(. SRCFiles)

#add_subdirectory("EightQueen1")
#add_subdirectory("EightQueen2")
#add_subdirectory("NQueen")

add_executable(Algorithm ${SRCFiles})