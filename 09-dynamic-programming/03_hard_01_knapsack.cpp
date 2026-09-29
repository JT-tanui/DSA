#include <algorithm>
#include <iostream>
#include <vector>

int maximumValue(const std::vector<int>& weights, const std::vector<int>& values, int capacity) {
    std::vector<int> best(capacity + 1, 0);
    for (std::size_t item = 0; item < weights.size(); ++item) {
        for (int current = capacity; current >= weights[item]; --current) {
            best[current] = std::max(best[current], values[item] + best[current - weights[item]]);
        }
    }
    return best[capacity];
}

int main() {
    std::cout << maximumValue({1, 3, 4, 5}, {1, 4, 5, 7}, 7) << '\n';
    return 0;
}