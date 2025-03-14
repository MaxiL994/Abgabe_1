# Minimum required CMake version
cmake_minimum_required(VERSION 3.20)

# Project definition
project(LaborSoftwareentwicklungI C)

# Set C standard and compiler flags
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic")

# Define the library
add_library(devlib
    src/developer/developer.c
    src/developer_group/developer_group.c
)

# Specify include directories for the library
target_include_directories(devlib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/developer
    ${CMAKE_CURRENT_SOURCE_DIR}/src/developer_group
)

# Define the main executable
add_executable(main src/main.c)

# Link the library to the executable
target_link_libraries(main PRIVATE devlib)