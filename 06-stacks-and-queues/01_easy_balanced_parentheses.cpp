#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& expression) {
    std::stack<char> opening;
    for (char character : expression) {
        if (character == '(' || character == '[' || character == '{') {
            opening.push(character);
        } else if (character == ')' || character == ']' || character == '}') {
            if (opening.empty()) {
                return false;
            }
            const char expected = character == ')' ? '(' : character == ']' ? '[' : '{';
            if (opening.top() != expected) {
                return false;
            }
            opening.pop();
        }
    }
    return opening.empty();
}

int main() {
    std::cout << std::boolalpha << isBalanced("{[()]}" ) << '\n';
    return 0;
}