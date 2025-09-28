cmake_minimum_required(VERSION 4.0)
project(starship-arena C CXX)

set(MY_SOURCES
    src/main.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${MY_SOURCES})

add_subdirectory(external/raylib)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC external/raylib/src)
target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC raylib)


