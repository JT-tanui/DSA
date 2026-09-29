#include <iostream>
#include <vector>

void merge(std::vector<int>& values, int left, int middle, int right) {
    std::vector<int> merged;
    int first = left;
    int second = middle + 1;
    while (first <= middle && second <= right) {
        if (values[first] <= values[second]) {
            merged.push_back(values[first++]);
        } else {
            merged.push_back(values[second++]);
        }
    }
    while (first <= middle) {
        merged.push_back(values[first++]);
    }
    while (second <= right) {
        merged.push_back(values[second++]);
    }
    for (int offset = 0; offset < static_cast<int>(merged.size()); ++offset) {
        values[left + offset] = merged[offset];
    }
}

void mergeSort(std::vector<int>& values, int left, int right) {
    if (left >= right) {
        return;
    }
    const int middle = left + (right - left) / 2;
    mergeSort(values, left, middle);
    mergeSort(values, middle + 1, right);
    merge(values, left, middle, right);
}

int main() {
    std::vector<int> values{38, 27, 43, 3, 9, 82, 10};
    mergeSort(values, 0, static_cast<int>(values.size()) - 1);
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}