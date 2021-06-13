#include <iostream>

double pow(double, int); // declaration

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

double pow(double base, int exponent) // definition
{
    double final_number = 1;
    for (int i = 0; i < exponent; i++)
    {
        final_number *= base;
    }
    return final_number;
}
