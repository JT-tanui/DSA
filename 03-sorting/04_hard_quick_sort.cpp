#include <iostream>
#include <utility>
#include <vector>

int partition(std::vector<int>& values, int low, int high) {
    const int pivot = values[high];
    int smaller = low;
    for (int index = low; index < high; ++index) {
        if (values[index] <= pivot) {
            std::swap(values[smaller++], values[index]);
        }
    }
    std::swap(values[smaller], values[high]);
    return smaller;
}

void quickSort(std::vector<int>& values, int low, int high) {
    if (low >= high) {
        return;
    }
    const int pivotIndex = partition(values, low, high);
    quickSort(values, low, pivotIndex - 1);
    quickSort(values, pivotIndex + 1, high);
}

int main() {
    std::vector<int> values{10, 7, 8, 9, 1, 5};
    quickSort(values, 0, static_cast<int>(values.size()) - 1);
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}