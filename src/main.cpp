#include "string_operations.h"
#include <iostream>

int main() {

    StringOperations strOps;

    std::string str1 = "Hello";
    std::string str2 = " World";

    std::string result = strOps.concatenate(str1, str2);
    std::cout << "Első sztring: " << str1 << std::endl;
    std::cout << "Második sztring: " << str2 << std::endl;
    std::cout << "Összefüzött sztring: " << result << std::endl;

    return 0;
}