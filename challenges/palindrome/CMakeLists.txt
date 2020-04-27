cmake_minimum_required(VERSION 3.5)

project(palindrome LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    palindrome
    palindrome.cpp palindrome.h
    ../common/consoleapp.h
    main.cpp
    )
