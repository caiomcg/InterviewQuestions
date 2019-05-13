#include <iostream>

void steps(const unsigned& size) {
    std::string blanks(size, ' ');

    for (unsigned i = 0; i < size; i++) {
        blanks[i] = '#';
        std::clog << "'" << blanks << "'" << std::endl;
    }
}

int main(int argc, char** argv) {
    steps(std::stoul(argv[1]));
    return 0;
}
