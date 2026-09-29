#include <iostream>

struct Node {
    int value;
    Node* next;
};

bool hasCycle(const Node* head) {
    const Node* slow = head;
    const Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    Node third{3, nullptr};
    Node second{2, &third};
    Node first{1, &second};
    third.next = &second;
    std::cout << std::boolalpha << hasCycle(&first) << '\n';
    return 0;
}