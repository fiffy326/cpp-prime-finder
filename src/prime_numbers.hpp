#ifndef PRIME_NUMBERS_HPP
#define PRIME_NUMBERS_HPP

#include <iostream>
#include <cmath>

typedef unsigned U;
typedef unsigned long UL;
typedef unsigned long long ULL;

inline constexpr bool PRIME = true;
inline constexpr bool NOT_PRIME = false;

template<typename T>
void printPrime(T count=0, T index=0) {
    if ((count == 0) && (index == 0)) {
        std::cout << "No prime numbers were found." << std::endl;
    } else {
        std::cout << "Prime #" << count << " = " << index << std::endl;
    }
    return;
}

template<typename T>
bool isPrime(T number) {
    if (number % 2 == 0) {
        return NOT_PRIME;
    }
    for (T divisor = 3; divisor <= sqrt(number); divisor += 2) {
        if (number % divisor == 0) {
            return NOT_PRIME;
        }
    }
    return PRIME;
}

template<typename T>
void findPrimesCapped(T searchCap) {
    printPrime(1, 2);
    T count = 2;
    for (T i = 3; i <= searchCap; i += 2) {
        if (isPrime(i)) {
            printPrime(count, i);
            count++;
        }
    }
    return;
}

void findPrimesUncapped();
void findPrimes(ULL searchCap);

#endif