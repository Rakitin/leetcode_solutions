#pragma once

#include <iostream>
#include <stack>

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
    bool findTarget(TreeNode* root, int k) {
		std::stack<TreeNode *> st1;
		st1.push(root);
		while (!st1.empty()) {
			TreeNode *cur1 = st1.top();
			st1.pop();
			
			std::stack<TreeNode *> st2;
			st2.push(root);
			while (!st2.empty()) {
				TreeNode *cur2 = st2.top();
				st2.pop();
				
				if (cur1 != cur2 and  cur1->val + cur2->val == k) {
					return true;
				}
				
				if (cur2 != cur1) {
					if (cur2->right) {
						st2.push(cur2->right);
					}
					if (cur2->left) {
						st2.push(cur2->left);
					}
				}
			}
			
			if (cur1->right) {
				st1.push(cur1->right);
			}
			if (cur1->left) {
				st1.push(cur1->left);
			}
		}
		return false;
    }
};
