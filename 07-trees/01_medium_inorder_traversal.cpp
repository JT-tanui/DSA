#include <iostream>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
};

void inorder(const TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    std::cout << root->value << ' ';
    inorder(root->right);
}

int main() {
    TreeNode left{1, nullptr, nullptr};
    TreeNode right{3, nullptr, nullptr};
    TreeNode root{2, &left, &right};
    inorder(&root);
    std::cout << '\n';
    return 0;
}