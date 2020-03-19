// Copyright (C) 2020  Diogo Justen. All rights reserved.

#include <iostream>
#include "sort.hpp"

void usage(char *app)
{
  std::cout << "Usage:" << std::endl;
  std::cout << app << " <number_of_elements>" << std::endl;
}

int main(int argc, char *argv[])
{
  int numElements;
  if (argc != 2)
  {
    usage(argv[0]);
    return -1;
  }

  numElements = atoi(argv[1]);
  if (numElements <= 0)
  {
    std::cout << "Invalid argument number: %d" << numElements << std::endl;
    return -1;
  }

  return 0;
}

