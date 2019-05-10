#include <iostream>
#include <string>

bool isPalindrome(const std::string& input) {
    for (unsigned i = 0; i < input.length(); i++) {
        if (input[i] != input[input.length() - i - 1]) {
            return false;
        }
    }

    return true;
}

bool isPalindrome2(const std::string& input) {
    return input == std::string(input.rbegin(), input.rend());
}

int main() {
    std::clog << isPalindrome("arara") << std::endl;
    std::clog << isPalindrome2("caac") << std::endl;
    std::clog << isPalindrome2("caio") << std::endl;
    std::clog << isPalindrome("caio2") << std::endl;
    return 0;
}
