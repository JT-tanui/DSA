#include <iostream>
#include <vector>

std::vector<int> buildPrefixSums(const std::vector<int>& values) {
    std::vector<int> prefix(values.size() + 1, 0);
    for (std::size_t index = 0; index < values.size(); ++index) {
        prefix[index + 1] = prefix[index] + values[index];
    }
    return prefix;
}

int rangeSum(const std::vector<int>& prefix, std::size_t left, std::size_t right) {
    return prefix[right + 1] - prefix[left];
}

int main() {
    const std::vector<int> values{2, 4, 6, 8, 10};
    const std::vector<int> prefix = buildPrefixSums(values);
    std::cout << rangeSum(prefix, 1, 3) << '\n';
    return 0;
}