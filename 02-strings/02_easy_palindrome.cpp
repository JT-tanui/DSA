#include <iostream>
#include <string>

bool isPalindrome(const std::string& text) {
    std::size_t left = 0;
    std::size_t right = text.size();
    while (left < right / 2) {
        --right;
        if (text[left] != text[right]) {
            return false;
        }
        ++left;
    }
    return true;
}

int main() {
    std::cout << std::boolalpha << isPalindrome("level") << '\n';
    return 0;
}