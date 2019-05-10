#include <iostream>
#include <string>

/** 
 * First attempt
 * 
 * Convert the integer to a string of the unsigned value. Reverse it and convert it to a signed integer
 */
int reverseInt(const int& input) {
    std::string input_as_string = std::to_string((input < 0) ? -input : input);
    
    input_as_string = std::string(input_as_string.rbegin(), input_as_string.rend());

    return ((input < 0) ? -1 : 1) * std::stoi(input_as_string); 
}

int main() {
    std::clog << reverseInt(123) << std::endl;
    std::clog << reverseInt(-123) << std::endl;
    return 0;
}
