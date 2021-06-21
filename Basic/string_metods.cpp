#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello";
    greeting += " there";
    greeting.append("!");
    greeting.insert(3, "        ");
    greeting.erase(3, 7);
    std::cout << greeting << std::endl;
    std::cout << greeting.length() << std::endl; // prints length
    std::cout << greeting.size() << std::endl; // prints length, same as above
    greeting.erase(3);
    std::cout << greeting << std::endl;
    greeting.erase(greeting.length() - 1); // remove the last character
    greeting.pop_back(); // remove the last character
    std::cout << greeting << std::endl;
    return 0;
}
