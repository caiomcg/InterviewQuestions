#include <iostream>
#include <string>
#include <cassert>

void reverseString(std::string& input) {
    for (unsigned i = 0; i < input.length() / 2; i++) {
        std::swap(input[i], input[input.length() - i - 1]);
    }
}

void reverseString2(std::string& input) {
    input = std::string(input.rbegin(), input.rend());
}

int main() {
    std::string home = "Home!";
    std::string home2 = "Home!!";

    reverseString(home);
    reverseString(home2);

    std::clog << home << std::endl;
    std::clog << home2 << std::endl;

    std::string house = "House";
    std::string house2 = "House!";

    reverseString(house);
    reverseString(house2);

    std::clog << house << std::endl;
    std::clog << house2 << std::endl;

    return 0;
}
