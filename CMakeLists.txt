cmake_minimum_required(VERSION 3.15)

project("plugin" VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    samp-ptl
    GIT_REPOSITORY https://github.com/katursis/samp-ptl.git
    GIT_TAG 06b5e2b9c51879532368dd9e468b5e259ce5d7ce
)

FetchContent_MakeAvailable(samp-ptl)

include_directories(
    includes
) 

add_library(${PROJECT_NAME} SHARED)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${samp-ptl_SOURCE_DIR}
)

target_sources(${PROJECT_NAME} PRIVATE
    source/main.cpp
    source/main.def
    source/main.h
    source/plugin.cpp
    source/plugin.h
    source/script.cpp
    source/script.h
)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}" SUFFIX ".dll")

target_compile_definitions(${PROJECT_NAME} PRIVATE
    HAVE_STDINT_H
)