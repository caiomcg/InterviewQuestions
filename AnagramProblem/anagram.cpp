#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

std::string removeUnnecessaryChars(std::string input) {
    for(int i = 0; i < input.size(); ++i) {
        if (!((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))) {
            input.erase(input.begin() + i);
        }
    }
    return input;
}

std::unordered_map<char, unsigned> charCount(const std::string& input) {
    if (input.empty()) {
        throw std::runtime_error("Cannot process empty strings");
    }

    std::unordered_map<char, unsigned> occurences;

    for (auto character : input) {
        std::unordered_map<char, unsigned>::iterator it = occurences.find(character);

        if (it != occurences.end()) {
            it->second++; // If has the character, update
        } else {
            occurences.insert(std::pair<char, unsigned>(character, 1));
        }
    }

    return occurences;
}


bool isAnagram(std::string str, std::string str2) {
    try {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

        auto str_char_count  = charCount(removeUnnecessaryChars(str));
        auto str2_char_count = charCount(removeUnnecessaryChars(str2));

        return str_char_count == str2_char_count;

    } catch(std::exception& e) {
        return str.length() == str2.length();
    }
}

int main() {
    // Below should all be equal
    std::clog << isAnagram("hello world", "olehl dlorw") << std::endl;
    std::clog << isAnagram("hello world", "olehldlorw") << std::endl;
    std::clog << isAnagram("hello world", "olehl!dlorw") << std::endl;
    std::clog << isAnagram("!", "!") << std::endl;

    // Below should be different
    std::clog << isAnagram("hello world", "olehl dIorw") << std::endl;
    return 0;    
}
