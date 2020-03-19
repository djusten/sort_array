# Copyright (C) 2020  Diogo Justen. All rights reserved.

add_library(sort STATIC
  ./sort.cpp
)

target_include_directories(sort PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(sort
)

#target_include_directories (sort
#  PUBLIC
#    ${CMAKE_CURRENT_BINARY_DIR}
#)
