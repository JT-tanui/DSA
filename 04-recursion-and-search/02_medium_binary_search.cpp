#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& values, int target, int low, int high) {
    if (low > high) {
        return -1;
    }
    const int middle = low + (high - low) / 2;
    if (values[middle] == target) {
        return middle;
    }
    if (values[middle] > target) {
        return binarySearch(values, target, low, middle - 1);
    }
    return binarySearch(values, target, middle + 1, high);
}

int main() {
    const std::vector<int> values{1, 3, 5, 7, 9, 11};
    std::cout << binarySearch(values, 7, 0, static_cast<int>(values.size()) - 1) << '\n';
    return 0;
}