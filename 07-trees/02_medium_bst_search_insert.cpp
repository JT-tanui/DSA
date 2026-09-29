#include <iostream>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode{value, nullptr, nullptr};
    }
    if (value < root->value) {
        root->left = insert(root->left, value);
    } else if (value > root->value) {
        root->right = insert(root->right, value);
    }
    return root;
}

bool contains(const TreeNode* root, int target) {
    if (root == nullptr) {
        return false;
    }
    if (root->value == target) {
        return true;
    }
    return target < root->value ? contains(root->left, target) : contains(root->right, target);
}

int main() {
    TreeNode* root = nullptr;
    for (int value : {8, 3, 10, 1, 6}) {
        root = insert(root, value);
    }
    std::cout << std::boolalpha << contains(root, 6) << '\n';
    return 0;
}