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
    src/developer.c
    src/developer_group.c
)

# Specify include directories for the library
target_include_directories(devlib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
   
)

# Define the main executable
add_executable(exam_developer_exec /exam_developer)

# Link the library to the executable
target_link_libraries(exam_developer_exec PRIVATE devlib)