// Copyright (C) 2020  Diogo Justen. All rights reserved.
#include "sort.hpp"

std::vector<int> Sort::getOrdered(std::vector<int> &vector)
{
  //Populate the initial vector with 1
  std::vector<int> result(vector.size(), 1);

  int indexN0 = 0;
  int indexN2 = vector.size() - 1;

  for (auto value : vector)
  {
    switch (value)
    {
      case 0:
        // Overwrite from the beginning
        result.at(indexN0++) = 0;
        break;

      case 1:
        break;

      case 2:
        // Overwrite from the end
        result.at(indexN2--) = 2;
        break;

      default:
        std::cout << "Unknown value: " << value << std::endl;
        std::cout << "Considering as 1" << std::endl;
    }
  }

  return result;
}

void Sort::printVector(std::vector<int> &vector)
{
  for (auto value : vector)
  {
    std::cout << value << " ";
  }
  std::cout << std::endl;
}
