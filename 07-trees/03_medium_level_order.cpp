#include <iostream>
#include <queue>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
};

void levelOrder(const TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    std::queue<const TreeNode*> pending;
    pending.push(root);
    while (!pending.empty()) {
        const TreeNode* current = pending.front();
        pending.pop();
        std::cout << current->value << ' ';
        if (current->left != nullptr) {
            pending.push(current->left);
        }
        if (current->right != nullptr) {
            pending.push(current->right);
        }
    }
}

int main() {
    TreeNode left{2, nullptr, nullptr};
    TreeNode right{3, nullptr, nullptr};
    TreeNode root{1, &left, &right};
    levelOrder(&root);
    std::cout << '\n';
    return 0;
}