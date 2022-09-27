#pragma once

#include <iostream>



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
    bool hasPathSum(TreeNode* root, int targetSum) {
		bool result = false;
		if (!root) {
			return false;
		}
		targetSum -= root->val;
		if (!root->left and !root->right) {
			return targetSum == 0;
		}
        if (root->left) {
			result = std::max(hasPathSum(root->left, targetSum), result);
		}
		if (root->right) {
			result = std::max(hasPathSum(root->right, targetSum), result);
		}
		return result;
    }
};
