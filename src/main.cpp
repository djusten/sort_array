// Copyright (C) 2020  Diogo Justen. All rights reserved.

#include <bits/stdc++.h>

#include "sort.hpp"

void usage(char *app)
{
  std::cout << "Usage:" << std::endl;
  std::cout << app << " <number_of_elements>" << std::endl;
  std::cout << "Where <number_of_elements> must be > 0" << std::endl;
}

bool parseArgs(int &numElements, int argc, char *argv[])
{
  if (argc != 2)
  {
    usage(argv[0]);
    return false;
  }

  numElements = atoi(argv[1]);
  if (numElements <= 0)
  {
    std::cout << "Invalid argument number: %d" << numElements << std::endl;
    usage(argv[0]);
    return false;
  }

  return true;
}

void populateVector(std::vector<int> &vector)
{
  std::random_device random;
  std::default_random_engine engine(random());
  //Only number between 0 and 2
  std::uniform_int_distribution<int> uniform_dist(0, 2);

  std::generate(vector.begin(), vector.end(), [&uniform_dist, &engine]() mutable
  {
    return uniform_dist(engine);
  });
}

int main(int argc, char *argv[])
{
  int numElements;
  if (!parseArgs(numElements, argc, argv))
  {
    std::cout << "Exiting..." << std::endl;
    return -1;
  }

  std::vector<int> inputVector(numElements);
  populateVector(inputVector);

  std::vector<int> orderedVector = Sort::getOrdered(inputVector);

  std::cout << "Original vector: ";
  Sort::printVector(inputVector);

  std::cout << "Ordered vector: ";
  Sort::printVector(orderedVector);

  return 0;
}

