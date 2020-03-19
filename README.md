# Sort array
Given an array consisting only 0s, 1s and 2s, please provide an algorithm sorting that array in ​O(n) time complexity. So in the resulting sorted array, 0s will be at starting, then the 1s & then the 2s.

## Getting Started
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites
- build-essential
- cmake
- git

### Installing
1. Install Linux packages dependencies (requires sudo).
  ```bash
  sudo apt-get update && sudo apt-get install -y build-essential cmake git
  ```

### Building
1. Clone the sort_array repository:
  ```bash
  git clone https://github.com/djusten/sort_array.git && cd sort_array/
  ```

1. Create a build folder and compile:
  ```bash
  mkdir build && cd build/
  cmake ..
  make
  ```

### Running
1. The application input is a number of elements where the application will create and populate a vector with 0s, 1s and 2s. To run the application:
  ```bash
  # ./sort_array <number_elements>
  ./sort_array 5000
  ```
