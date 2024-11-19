
#include <iostream>
#include <string>
#include <cctype>

bool isValidLString(const std::string& input) {
    size_t length = input.length();
    if (length < 2) return false;


    if (input[0] != '+' && input[0] != '-') {
        return false;
    }

    size_t i = 1;

    bool hasDigits = false;
    while (i < length && input[i] >= '3' && input[i] <= '9') {
        hasDigits = true;
        i++;
    }
    if (!hasDigits) return false;


    while (i < length && input[i] >= 'J' && input[i] <= 'Z') {
        i++;
    }


    if (i == length - 1 && input[i] == '+') {
        return true;
    }
    return false;
}

int main() {
    std::string input;
    std::cout << "Enter a string to check: ";
    std::cin >> input;

    if (isValidLString(input)) {
        std::cout << "The string belongs to L(V)." << std::endl;
    }
    else {
        std::cout << "The string does NOT belong to L(V)." << std::endl;
    }

    return 0;
}