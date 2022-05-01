#include <iostream>
#include <string>
#include "prime_numbers.hpp"

int main(int argc, char* argv[]) {
    ULL searchCap;
    if (argc > 1) {
        searchCap = std::stoul(argv[1], NULL, 10);
    } else {
        std::cout << "Search cap (0 for max): ";
        std::string userInput;
        std::cin >> userInput;
        searchCap = std::stoull(userInput, NULL, 10);
    }
    findPrimes(searchCap);
    return 0;
}