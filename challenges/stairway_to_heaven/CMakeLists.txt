cmake_minimum_required(VERSION 3.5)

project(stairway_to_heaven LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    stairway_to_heaven
    StairwayToHeavenApp.cpp StairwayToHeavenApp.h
    main.cpp
    )
