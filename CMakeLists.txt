# Copyright (C) 2020  Diogo Justen. All rights reserved.

cmake_minimum_required(VERSION 3.0)
project(sort_array)

#################################### Flags ####################################

set(CMAKE_CXX_STANDARD 14)
add_compile_options (-Wall -Werror -O3)

################################# Source files #################################

add_executable(sort_array
  ./src/main.cpp
)

target_link_libraries(sort_array
  sort
)

add_subdirectory (src)
#add_subdirectory (test)
