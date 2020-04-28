cmake_minimum_required(VERSION 3.5)

project(classroom LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ".")
set(CMAKE_CURRENT_BINARY_DIR ".")

add_executable(
    classroom
    classroom.cpp classroom.h
    presencelist.cpp presencelist.h
    main.cpp)
