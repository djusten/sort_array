# Copyright (C) 2020  Diogo Justen. All rights reserved.

cmake_minimum_required(VERSION 3.0)

add_library(sort STATIC
  ./sort.cpp
)

target_include_directories(sort PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(sort
)
