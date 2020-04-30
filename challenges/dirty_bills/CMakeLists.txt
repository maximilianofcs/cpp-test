cmake_minimum_required(VERSION 3.5)

project(dirty_bills LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    dirty_bills
    dirty_bills.cpp dirty_bills.h
    main.cpp)
