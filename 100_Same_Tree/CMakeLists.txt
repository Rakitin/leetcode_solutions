cmake_minimum_required(VERSION 2.8)

get_filename_component(PROJ_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJ_NAME})

set(SOURCE_FILES
    src/solution.h
    src/solution2.h
    src/main.cpp
    )

include_directories(
    ../test
    )

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
