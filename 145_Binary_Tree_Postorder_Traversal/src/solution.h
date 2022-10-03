#pragma once

#include <iostream>
#include <vector>



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
    std::vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> result;
		if (!root) {
			return result;
		}
		std::vector<int> tmp;
		tmp = postorderTraversal(root->left);
		result.insert(std::end(result), std::begin(tmp), std::end(tmp));
		tmp = postorderTraversal(root->right);
		result.insert(std::end(result), std::begin(tmp), std::end(tmp));
		result.push_back(root->val);
		return result;
    }
};
