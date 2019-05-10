#include <iostream>
#include <vector>

std::vector<std::vector<int>> splitVector(const std::vector<int>& vector, const unsigned& size) {
    std::vector<std::vector<int>> solution;

    if (vector.size() < size) {
        solution.push_back(vector);
        return solution;
    }

    auto start_iterator = vector.begin();
    auto end_iterator   = vector.begin() + size;

    while (start_iterator != vector.end())  {
        if (start_iterator != vector.end()) {
            solution.push_back(std::vector<int>(start_iterator, end_iterator));
        }
        start_iterator = end_iterator;
        end_iterator += size;

        if (end_iterator > vector.end()) {
            end_iterator = vector.end();
        }
    }
    

    return solution;
}

void formatedPrint(const std::vector<std::vector<int>>& solutions) {
    std::clog << "{\n";
    for (auto& solution : solutions) {
        std::clog << "\t";
        for (auto& value : solution) {
            std::clog << value << " ";
        }
        std::clog << "\n";
    }
    std::clog << "}\n";
}

int main() {
    auto solutions = splitVector(std::vector<int>{1,2,3,4,5,6,7,8,9}, 123);
    formatedPrint(solutions);
    return 0;
}
