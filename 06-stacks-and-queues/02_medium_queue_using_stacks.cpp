#include <iostream>
#include <stack>

class QueueUsingStacks {
public:
    void push(int value) {
        input.push(value);
    }

    int front() {
        moveIfNeeded();
        const int value = output.top();
        output.pop();
        return value;
    }

private:
    std::stack<int> input;
    std::stack<int> output;

    void moveIfNeeded() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }
};

int main() {
    QueueUsingStacks queue;
    queue.push(10);
    queue.push(20);
    std::cout << queue.front() << '\n';
    return 0;
}