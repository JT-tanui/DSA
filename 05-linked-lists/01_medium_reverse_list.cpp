#include <iostream>

struct Node {
    int value;
    Node* next;
};

Node* reverseList(Node* head) {
    Node* previous = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }
    return previous;
}

void printList(const Node* head) {
    while (head != nullptr) {
        std::cout << head->value << ' ';
        head = head->next;
    }
    std::cout << '\n';
}

int main() {
    Node third{3, nullptr};
    Node second{2, &third};
    Node first{1, &second};
    printList(reverseList(&first));
    return 0;
}