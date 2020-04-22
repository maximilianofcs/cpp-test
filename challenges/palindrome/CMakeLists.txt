cmake_minimum_required(VERSION 3.5)

project(palindrome LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    palindrome
    main.cpp
    ../common/helper.h
    palindrome.cpp palindrome.h
    )
