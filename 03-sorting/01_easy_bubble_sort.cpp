#include <algorithm>
#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& values) {
    for (std::size_t end = values.size(); end > 1; --end) {
        bool swapped = false;
        for (std::size_t index = 1; index < end; ++index) {
            if (values[index - 1] > values[index]) {
                std::swap(values[index - 1], values[index]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    std::vector<int> values{5, 1, 4, 2, 8};
    bubbleSort(values);
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}