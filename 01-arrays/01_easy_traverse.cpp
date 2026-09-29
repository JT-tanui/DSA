#include <iostream>
#include <vector>

int main() {
    const std::vector<int> values{10, 20, 30, 40, 50};

    for (std::size_t index = 0; index < values.size(); ++index) {
        std::cout << "index " << index << ": " << values[index] << '\n';
    }

    return 0;
}