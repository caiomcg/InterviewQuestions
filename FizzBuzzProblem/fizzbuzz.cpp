#include <iostream>
#include <string>

std::string fizzBuzz(const short& value) {
    std::string result;

    if (value % 3 == 0) {
        result += "Fizz";
    }

    if (value % 5 == 0) {
        result += "Buzz";
    }
    
    return result;
}

int main() {
    for (short i = 1; i <= 100; i++) {
        std::string res = fizzBuzz(i);

        if (res.empty()) {
            std::cout << i << std::endl;
        } else {
            std::cout << res << std::endl;
        }
    }
    return 0;
}
