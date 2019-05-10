
/**
 * Given a string, return the character that is most commonly used in a string 
 */
#include <iostream>
#include <string>
#include <stdexcept>
#include <unordered_map>

char maxChars(const std::string& input) {
    if (input.empty()) {
        throw std::runtime_error("Cannot process empty strings");
    }

    std::unordered_map<char, unsigned> occurences;

    std::pair<char, unsigned> current_max{' ', 0};

    for (auto character : input) {
        std::unordered_map<char, unsigned>::iterator it = occurences.find(character);

        if (it != occurences.end()) {
            it->second++; // If has the character, update
            if (current_max.second < it->second) {
                current_max = *it;
            }
        } else {
            if (!current_max.second) {
                current_max = std::pair<char, unsigned>(character, 1);
            }
            occurences.insert(std::pair<char, unsigned>(character, 1));
        }
    }

    return current_max.first;
}

int main() {
    std::clog << maxChars("123123123123") << std::endl;
    std::clog << maxChars("11123") << std::endl;
    std::clog << maxChars("Caaaioo") << std::endl;
    try {
        std::clog << maxChars("") << std::endl;
    } catch(std::exception& e) {
        std::clog << "what(): " << e.what() << std::endl;
    }

    return 0;
}
