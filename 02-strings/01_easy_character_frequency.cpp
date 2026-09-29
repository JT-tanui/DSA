#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    const std::string text = "interview";
    std::unordered_map<char, int> frequency;
    for (char character : text) {
        ++frequency[character];
    }

    for (const auto& entry : frequency) {
        std::cout << entry.first << ": " << entry.second << '\n';
    }
    return 0;
}