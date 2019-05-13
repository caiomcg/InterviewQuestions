#include <iostream>

void pyramid(const unsigned& depth) {
    unsigned base = depth * 2 - 1; 
    // Add one to add spaces
    // Remove one to remove spaces

    std::string blanks(base, ' ');

    for (unsigned i = 0; i < depth; i++) {
        if (i == 0) {
            blanks[base / 2] = '#';
        } else {
            blanks[(base / 2) - i] = blanks[(base / 2) + i] = '#';
        }
        std::clog << "'" << blanks << "'" << std::endl;
    }
}

int main(int argc, char** argv) {
    pyramid(std::stoul(argv[1]));
    return 0;
}
