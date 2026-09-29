#include <iostream>
#include <vector>

bool insertAt(std::vector<int>& values, std::size_t position, int value) {
    if (position > values.size()) {
        return false;
    }

    values.push_back(0);
    for (std::size_t index = values.size() - 1; index > position; --index) {
        values[index] = values[index - 1];
    }
    values[position] = value;
    return true;
}

bool deleteAt(std::vector<int>& values, std::size_t position) {
    if (position >= values.size()) {
        return false;
    }

    for (std::size_t index = position; index + 1 < values.size(); ++index) {
        values[index] = values[index + 1];
    }
    values.pop_back();
    return true;
}

void print(const std::vector<int>& values) {
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> values{10, 20, 40, 50};
    insertAt(values, 2, 30);
    print(values);
    deleteAt(values, 1);
    print(values);
    return 0;
}