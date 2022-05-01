#include <iostream>
#include <cmath>
#include <climits>
#include "prime_numbers.hpp"

void findPrimesUncapped() {
    printPrime(1, 2);
    ULL count = 2;
    for (ULL i = 3; i <= ULLONG_MAX; i += 2) {
        if (isPrime(i)) {
            printPrime(count, i);
            count++;
        }
    }
    std::cout << "The maximum value that can be stored in memory has been reached." << std::endl;
    return;
}

void findPrimes(ULL searchCap) {
    if (searchCap == 0) {
        findPrimesUncapped();
    } else if (searchCap < 2) {
        printPrime<U>();
    } else if (searchCap <= UINT_MAX) {
        findPrimesCapped((U)searchCap);
    } else if (searchCap <= ULONG_MAX) {
        findPrimesCapped((UL)searchCap);
    } else if (searchCap <= ULLONG_MAX) {
        findPrimesCapped((ULL)searchCap);
    }
    return;
}