#include <iostream>
#include <string>
#include <unordered_map>

bool areAnagrams(const std::string& first, const std::string& second) {
    if (first.size() != second.size()) {
        return false;
    }

    std::unordered_map<char, int> counts;
    for (char character : first) {
        ++counts[character];
    }
    for (char character : second) {
        if (--counts[character] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << std::boolalpha << areAnagrams("listen", "silent") << '\n';
    return 0;
}