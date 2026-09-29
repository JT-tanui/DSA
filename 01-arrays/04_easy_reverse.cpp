#include <algorithm>
#include <iostream>
#include <vector>

void reverseInPlace(std::vector<int>& values) {
    std::size_t left = 0;
    std::size_t right = values.size();
    while (left < right / 2) {
        --right;
        std::swap(values[left], values[right]);
        ++left;
    }
}

int main() {
    std::vector<int> values{1, 2, 3, 4, 5};
    reverseInPlace(values);
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}