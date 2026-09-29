#include <iostream>
#include <stack>
#include <vector>

std::vector<int> nextGreater(const std::vector<int>& values) {
    std::vector<int> answer(values.size(), -1);
    std::stack<int> indexes;
    for (int index = 0; index < static_cast<int>(values.size()); ++index) {
        while (!indexes.empty() && values[index] > values[indexes.top()]) {
            answer[indexes.top()] = values[index];
            indexes.pop();
        }
        indexes.push(index);
    }
    return answer;
}

int main() {
    for (int value : nextGreater({4, 5, 2, 10, 8})) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    return 0;
}