cmake_minimum_required(VERSION 3.21)

project(MinusLag VERSION 1.0.0)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

find_package(Geode REQUIRED)

setup_geode_mod(${PROJECT_NAME})
