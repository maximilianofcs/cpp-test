cmake_minimum_required(VERSION 3.5)

project(stairway_to_heaven_tests LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ".")
set(CMAKE_CURRENT_BINARY_DIR ".")

add_executable(
    stairway_to_heaven_tests
    ../../common/test.h
    ../StairwayToHeavenApp.cpp ../StairwayToHeavenApp.h
    main.cpp)

enable_testing()
add_test(stairway_to_heaven_tests COMMAND stairway_to_heaven_tests)

if (DEFINED ENV{BOOST_INCLUDE_DIR})
    set(BOOST_INCLUDE_DIR $ENV{BOOST_INCLUDE_DIR})
else ()
    set(BOOST_INCLUDE_DIR "") # set by Qt Creator wizard
endif ()
if (BOOST_INCLUDE_DIR STREQUAL "")
    message("BOOST_INCLUDE_DIR is not set, assuming Boost can be found automatically in your system")
elseif (EXISTS ${BOOST_INCLUDE_DIR})
    include_directories(${BOOST_INCLUDE_DIR})
endif ()
