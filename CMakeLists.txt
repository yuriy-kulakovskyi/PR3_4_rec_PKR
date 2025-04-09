cmake_minimum_required(VERSION 3.14)
project(PR3_4_rec)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add GoogleTest subdirectory
add_subdirectory(lib/googletest)

# Include directories for GoogleTest
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Include directories for ncurses
include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

# Main executable
add_executable(PR3_4_rec
        main.cpp
        functions/functions.h
        functions/functions.cpp
)

target_link_libraries(PR3_4_rec)

# Test executable
add_executable(PR3_4_rec_tests
        tests/tests.cpp
        functions/functions.h
        functions/functions.cpp
)

target_link_libraries(PR3_4_rec_tests gtest gtest_main)

# Enable testing
enable_testing()
include(GoogleTest)
gtest_discover_tests(PR3_4_rec_tests)