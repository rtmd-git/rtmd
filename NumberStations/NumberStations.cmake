cmake_minimum_required (VERSION 2.8.12)
project (NumberStations)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")

add_executable(NumberStations main.cpp version.h version.cpp INumberStation.h INumberStation.cpp SwedishRhapsody.h SwedishRhapsody.cpp)
