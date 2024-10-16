#include "string_operations.h"
#include <iostream>

int main() {

    StringOperations strOps;

    std::string str1 = "Hello";
    std::string str2 = " World";
    std::string to_rev = "abcdef";

    std::string result = strOps.concatenate(str1, str2);
    std::cout << "Első sztring: " << str1 << std::endl;
    std::cout << "Második sztring: " << str2 << std::endl;
    std::cout << "Összefüzött sztring: " << result << std::endl;

    std::string reversed = strOps.reverse(to_rev);
    std::cout << "Eredeti sztring: " << to_rev << std::endl; 
    std::cout << "Megfordított sztring: " << reversed << std::endl; 

    size_t length = strOps.length("Vajon milyen hosszú ez a sztring?");
    std::cout << "A sztring hossza: " << length << std::endl;

    return 0;
}