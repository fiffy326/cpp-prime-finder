#!/bin/sh

echo "Compiling the source files into object files..."
g++ -Wall -Wextra -std=c++17 -O3 -c ./src/prime_numbers.cpp -o ./build/prime_numbers.o
g++ -Wall -Wextra -std=c++17 -O3 -c ./src/main.cpp -o ./build/main.o