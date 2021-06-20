#include <iostream>
#include <climits>
#include <float.h>

int main() {
    // // INTEGER TYPES
    // short a; // 16-bits
    // int b; // Atleast 16-bits, usually 32-bits
    // long c; // Atleast 32-bits
    // long long d; // Atleast 64-bits
    // // short <= int <= long <= long long

    // // unsigned - only positive values
    // unsigned short aa;
    // unsigned int bb;
    // unsigned long cc;
    // unsigned long long dd;


    // // CHAR TYPES
    // char x = 'x'; // 8-bits
    // char num = 127; // this is max for signed
    // unsigned char unum = 255;
    // // char16_t and char32_t ---> Related to unicode. More symbols


    // // ESCAPE SEQUENCES
    // std::cout << "\t" << std::endl;
    // std::cout << "Hello\tThere" << std::endl; // add a tab space
    // std::cout << "Hello\bThere" << std::endl; // delete preceding character
    // std::cout << "Hello\nThere" << std::endl; // insert a new line
    // std::cout << "Hello\vThere" << std::endl; // tab in a new line
    // std::cout << "Hello\aThere" << std::endl; // Adds a beep sound
    // std::cout << "\0" << std::endl; // Terminate a C style string
    // std::cout << "Hello \"There\"" << std::endl; // Type a double quote

    // // BOOLEAN TYPE
    // bool pizza_is_good = true; // Also, 0 is false, all other numbers are true
    // pizza_is_good = false;
    // std::cout << true << std::endl; // Outputs 1
    // std::cout << std::boolalpha << true << std::endl; // Outputs "true"


    // // FLOATING POINT NUMBERS
    // float f = 10.0 / 3;
    // f = f * 100000000;
    // std::cout << f << std::endl; // Output -> 3.33333e+008
    // std::cout << std::fixed << f << std::endl; // Output -> 333333312.000000
    // std::cout << FLT_DIG << std::endl; // Output -> 6 - float can be trusted till 6 digits
    // std::cout << DBL_DIG << std::endl; // Output -> 15 - double can be trusted till 15 digits
    // std::cout << LDBL_DIG << std::endl; // Output -> 18 - long double can be trusted till 18 digits

    // double g; // Mostly used
    // long double h;


    // SYMBOLIC CONSTANTS
    const int y = 5; // Read only variable
    // Another way using #define PI = 3.14; --> at the top. Not preferred
    enum { z = 100 };
}
