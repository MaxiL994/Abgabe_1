# Minimum required CMake version
cmake_minimum_required(VERSION 3.20)

# Project definition
project(CacheCows C)

# Set C standard and compiler flags
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -pedantic)

# Create a library from developer and developer_group source files
add_library(devlib src/developer.c src/developer_group.c)

# Set the include directory for the library
target_include_directories(devlib PUBLIC include)

# Create the main executable
add_executable(cachecows_exec src/main.c)

# Link the library to the main executable
target_link_libraries(cachecows_exec PRIVATE devlib)