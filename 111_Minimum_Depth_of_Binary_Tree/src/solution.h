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
    int minDepth(TreeNode* root) {
        if (!root) {
            return 0;
        }
        if (root->left && root->right) {
            return std::min(minDepth(root->left), minDepth(root->right)) + 1;
        }
        if (root->left) {
            return minDepth(root->left) + 1;
        }
        if (root->right) {
            return minDepth(root->right) + 1;
        }
        return 1;
    }
};
