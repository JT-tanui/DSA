#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& values, int target) {
    for (std::size_t index = 0; index < values.size(); ++index) {
        if (values[index] == target) {
            return static_cast<int>(index);
        }
    }
    return -1;
}

int main() {
    const std::vector<int> values{7, 4, 9, 2, 6};
    std::cout << linearSearch(values, 9) << '\n';
    return 0;
}