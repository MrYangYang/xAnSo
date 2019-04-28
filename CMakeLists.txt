cmake_minimum_required (VERSION 2.6)
project (xAnSo)
set(CORE_SOURCE
        Core/dyn_item.cpp
        Core/dyn_section.cpp
        Core/elf_header.cpp
        Core/elf_section.cpp
        Core/elf_segment.cpp)
set(UTIL_SOURCE
        util/util.cpp)
set(FIX_SOURCE
        fix/section_fix.cpp)
set(LOG_SOURCE
        log.cpp)
include_directories(Core)
include_directories(util)
include_directories(./)
include_directories(fix)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(xAnSo ${CORE_SOURCE} ${UTIL_SOURCE} ${FIX_SOURCE} ${LOG_SOURCE} main/main.cpp)
