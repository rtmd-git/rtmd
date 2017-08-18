cmake_minimum_required (VERSION 2.8.12)
project (NumberStations)

if(WIN32)

else(WIN32)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=gnu++0x")
endif()

add_executable(NumberStations main.cpp version.h version.cpp INumberStation.h INumberStation.cpp LincolnshirePoacher.h LincolnshirePoacher.cpp)
