#include <iostream>
#include <regex>

unsigned countVowels(const std::string& phrase) {
    std::smatch match;
    unsigned matches = 0;

    for (auto it = phrase.begin(); std::regex_search(it, phrase.end(), match, std::regex("[aeiou]")); it = match[0].second) {
        matches++;
    }

    return matches;
}

int main(int argc, char** argv) {
    std::clog << countVowels(argv[1]) << std::endl;
    return 0;
}
