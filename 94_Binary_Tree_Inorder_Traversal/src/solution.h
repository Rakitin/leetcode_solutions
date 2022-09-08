#pragma once

#include <iostream>

#include <vector>
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
    std::vector<int> inorderTraversal(TreeNode *root) {
        std::vector<int> result;

        if (!root) {
            return result;
        }

        std::stack<TreeNode *> q;
        TreeNode *cur = root;

        while (!q.empty() || cur) {
            if (cur) {
                q.push(cur);
                cur = cur->left;
            }
            else {
                cur = q.top();
                q.pop();
                result.push_back(cur->val);
                cur = cur->right;
            }
        }
        return result;
    }
};
