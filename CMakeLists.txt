cmake_minimum_required(VERSION 3.8)
project(danny_calculates_mt2)

set(CMAKE_CXX_STANDARD 11)

list(APPEND CMAKE_PREFIX_PATH $ENV{ROOTSYS})
find_package(ROOT REQUIRED COMPONENTS Gpad Graf Graf3d Core Hist Tree RIO Physics)

message("INFO Found ROOT at : $ENV{ROOTSYS}")
message("INFO  > ROOT LIBRARIES : ${ROOT_LIBRARIES}")

include_directories("$ENV{ROOTSYS}/include" mt2)

set(HEADER_FILES
        #mt2
        mt2/MT2.h
        mt2/MT2_ROOT.h 
)

set(SOURCE_FILES
        #mt2
        mt2/MT2.cpp
        mt2/MT2_ROOT.cpp
        #danny
        main.cpp
)

add_executable(calculate_mt2 ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(calculate_mt2 ${ROOT_LIBRARIES})
