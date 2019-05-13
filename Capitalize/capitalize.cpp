#include <iostream>

std::string capitalize(std::string to_capitalize) {
    bool had_space = false;

    to_capitalize[0] = std::toupper(to_capitalize[0]);
    
    for (auto& character : to_capitalize) {
        if (had_space) {
            character = std::toupper(character);
            had_space = false;
        }
        
        if (character == ' ') {
            had_space = true;
        }
    }

    return to_capitalize;
}

std::string capitalizeV2(const std::string& to_capitalize) {
    std::string res = " " + to_capitalize;
    
    for (unsigned i = 1; i < res.length(); i++) {
        if (res[i - 1] == ' ') {
            res[i] = std::toupper(res[i]);
        }
    }

    res.erase(res.begin());
    return res;
}

int main() {
    std::clog << capitalize("a short sentence") << std::endl;
    std::clog << capitalize("!a short sentence!") << std::endl;
    std::clog << capitalize("a lazy fox") << std::endl;
    std::clog << capitalize("look, it is working") << std::endl;

    std::clog << capitalizeV2("a short sentence") << std::endl;
    std::clog << capitalizeV2("!a short sentence!") << std::endl;
    std::clog << capitalizeV2("a lazy fox") << std::endl;
    std::clog << capitalizeV2("look, it is working") << std::endl;
    return 0;
}
