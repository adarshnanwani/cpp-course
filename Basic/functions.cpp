#include <iostream>
#include <cmath>

int main()
{
    int base;
    int exponent;
    std::cout << "Please enter the base number: ";
    std::cin >> base;
    std::cout << "Please enter the exponent: ";
    std::cin >> exponent;

    double result = pow(base, exponent);
    std::cout << base << " to the power " << exponent << " is " << result;
    return 0;
}
