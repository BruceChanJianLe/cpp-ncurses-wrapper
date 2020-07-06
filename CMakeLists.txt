cmake_minimum_required(VERSION 2.8.3)
project(nc_wrapper)

# Use C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find ncurses package and link its directory
find_package(Curses REQUIRED)
include_directories(
    include     # This is to find the header of nc.hpp
    ${CURSES_INCLUDE_DIR}
)

# Create an executable for demo purpose
add_executable(display
               src/main.cpp
               src/nc.cpp
)

# Link ncurses libary with executable
target_link_libraries(display ${CURSES_LIBRARIES})