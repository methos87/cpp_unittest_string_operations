#ifndef STRING_OPERATIONS_H
#define STRING_OPERATIONS_H

#include <string> // String létrehozásához
#include <algorithm> // Szöveg megfordításához

class StringOperations {

public:

    // Két karakterlánc összefűzése
    std::string concatenate(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }

    // A karakterlánc megfordítása
    std::string reverse(const std::string& str) {
        std::string reversed = str;
        std::reverse(reversed.begin(), reversed.end());
        return reversed;
    }

    // A karakterlánc hosszának lekérdezése
    int length(const std::string& str) {
        return str.length();
    }
    
};

#endif