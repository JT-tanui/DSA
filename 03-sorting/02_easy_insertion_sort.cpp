#include <iostream>
#include <utility>
#include <vector>

void insertionSort(std::vector<int>& values) {
    for (std::size_t index = 1; index < values.size(); ++index) {
        const int current = values[index];
        std::size_t position = index;
        while (position > 0 && values[position - 1] > current) {
            values[position] = values[position - 1];
            --position;
        }
        values[position] = current;
    }
}

int main() {
    std::vector<int> values{5, 2, 4, 6, 1, 3};
    insertionSort(values);
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}