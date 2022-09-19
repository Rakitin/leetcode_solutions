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
    bool isSymmetric(TreeNode* root) {
        return isSameTree(root->left, root->right);
    }

private:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if ((p && !q) || (!p && q)) return false;
        if ((p->val != q->val)) return false;
        return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
    }

};