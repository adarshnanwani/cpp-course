#include <iostream>
#include <cmath>

void print_pow(double base, int exponent)
{
    double result = pow(base, exponent);
    std::cout << base << " raised to the power " << exponent << " is " << result << "." << std::endl;

}

int main()
{
    double base;
    int exponent;

    std::cout << "Please enter the base number: ";
    std::cin >> base;
    std::cout << "Please enter the exponent: ";
    std::cin >> exponent;

    print_pow(base, exponent);
    return 0;
}
