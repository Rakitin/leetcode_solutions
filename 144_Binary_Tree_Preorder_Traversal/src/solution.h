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
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> result;
		if (!root) {
			return result;
		}
		result.push_back(root->val);
		std::vector<int> tmp;
		tmp = preorderTraversal(root->left);
		result.insert(std::end(result), std::begin(tmp), std::end(tmp));
		tmp = preorderTraversal(root->right);
		result.insert(std::end(result), std::begin(tmp), std::end(tmp));
		return result;
    }
};
