#!/bin/sh

echo "Linking the object files and creating an executable..."
g++ -Wall -Wextra -std=c++17 -O3 ./build/main.o ./build/prime_numbers.o -o ./bin/main -lm