#include <iostream>
#include <cmath>

int main() {
    std::cout << sqrt(12) << std::endl; // Needs cmath import
    std::cout << sqrt(-12) << std::endl; // Output -> nan --> Not a number
    std::cout << NAN << std::endl; // Output -> nan --> Not a number
    std::cout << pow(9, 999) << std::endl; // Output -> inf --> Infinity
    std::cout << INFINITY << std::endl; // Output -> inf --> Infinity
    std::cout << pow(-9, 999) << std::endl; // Output -> -inf --> Negative Infinity
    std::cout << -INFINITY << std::endl; // Output -> inf --> Negative Infinity



    std::cout << remainder(10, 3.2) << std::endl; // works with decimals while modulus doesn't


    std::cout << fmax(10, 3.25) << std::endl; // returns bigger number
    std::cout << fmin(10, 3.25) << std::endl; // returns smaller number
    std::cout << ceil(fmin(10, 3.25)) << std::endl; // returns 4 - ceiling
    std::cout << floor(fmin(10, 3.25)) << std::endl; // returns 3
    std::cout << floor(-1.5) << std::endl; // returns -2
    std::cout << trunc(-1.5) << std::endl; // returns -1
    std::cout << round(-1.5) << std::endl; // returns -2

    
    return 0;
}
