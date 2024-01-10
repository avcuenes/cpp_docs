cmake_minimum_required(VERSION 3.1) # Mandotory
project(first_project)              # Mandotory
set(CMAKE_CXX_STANDARD 17)          # Use c++17


# tell cmake where to loook for *.hpp , *.h files
include_directories(include/)

# create librarry "libtools"
add_library(tools tools.cpp) # create libtools.a

# add executable main
add_executable(main main.cpp) # create main.0

# tell the linker to bind these object together
target_link_libraries(main tools) # ./main







