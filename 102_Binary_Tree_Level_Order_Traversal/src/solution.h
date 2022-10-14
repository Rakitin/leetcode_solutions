#pragma once

#include <vector>
#include <queue>

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
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
		std::vector<std::vector<int>> result;
		helper(root, 0, result);
		return result;
    }

private:
	void helper(TreeNode* root, int lavel, std::vector<std::vector<int>> &result) {
		if (!root) {
			return;
		}
        if (result.size() < lavel + 1) {
			result.push_back(std::vector<int>{});
		}
		result[lavel].push_back(root->val);
		if (root->left) {
			helper(root->left, lavel + 1, result);
		}
		if (root->right) {
			helper(root->right, lavel + 1, result);
		}
	}
};
