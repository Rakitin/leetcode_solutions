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

    int maxDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int nl = maxDepth(root->left);
        int nr = maxDepth(root->right);
        return std::max(nl, nr) + 1;
    }
};
