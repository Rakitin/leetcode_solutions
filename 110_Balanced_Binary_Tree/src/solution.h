#pragma once

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }
        if (!root->left && root->right) {
            return false;
        }

        if (root->left && !root->right) {
            return false;
        }

        if (root->left && root->right && root->left->val > root->right->val) {
            return false;
        }

        return isBalanced(root->left) && isBalanced(root->right);

    }
};
