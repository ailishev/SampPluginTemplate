cmake_minimum_required(VERSION 3.15)

project("plugin" VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    includes
    libraries/pawn
) 

add_library(${PROJECT_NAME} SHARED)

target_sources(${PROJECT_NAME} PRIVATE
    source/main.cpp
    source/main.def
    includes/sampgdk.h
    includes/sampgdk.c
    libraries/pawn/amxplugin.cpp
    libraries/pawn/plugincommon.h
    libraries/pawn/amx/amx.h
    libraries/pawn/amx/getch.h
    libraries/pawn/amx/sclinux.h
)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}" SUFFIX ".dll")
