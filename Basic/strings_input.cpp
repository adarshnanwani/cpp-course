#include <iostream>
#include <string>

int main() {
    std::string greeting;
    getline(std::cin, greeting); // used to get strings
    std::cout << greeting << std::endl;
    // cin.getline(); // used to get numbers
    return 0;
}
