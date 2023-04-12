#pragma once

#include <iostream>

#include <stack>
#include <utility>
#include <limits>


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
	int minDiffInBST(TreeNode* root) {
		if (root == nullptr) {
			return 0;
		}
		
		int result = std::numeric_limits<int>::max();
		std::stack<TreeNode *> st;
		TreeNode *cur = root;
		TreeNode *lastvisited = nullptr;
		while (!st.empty() or cur) {
			if (cur) {
				st.push(cur);
				cur = cur->left;
			}
			else {
				TreeNode *tmp = st.top();
				if (tmp->right and lastvisited != tmp->right) {
					cur = tmp->right;
				}
				else {
					st.pop();
					// std::cout << tmp->val << std::endl;
					std::stack<TreeNode *> parents = st;
					while (!parents.empty()) {
						TreeNode *a = parents.top();
						parents.pop();
						result = std::min(result, std::abs(tmp->val - a->val));
					}
					lastvisited = tmp;
				}
			}
		}

		return result;
	}
};
