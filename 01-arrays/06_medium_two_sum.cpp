#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& values, int target) {
    std::unordered_map<int, int> seen;
    for (int index = 0; index < static_cast<int>(values.size()); ++index) {
        const int needed = target - values[index];
        const auto match = seen.find(needed);
        if (match != seen.end()) {
            return {match->second, index};
        }
        seen[values[index]] = index;
    }
    return {};
}

int main() {
    const std::vector<int> answer = twoSum({2, 7, 11, 15}, 9);
    for (int index : answer) {
        std::cout << index << ' ';
    }
    std::cout << '\n';
    return 0;
}