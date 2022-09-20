#pragma once

#include <iostream>
#include <queue>
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
    std::vector<double> averageOfLevels(TreeNode* root) {
        std::vector<double> result;
        std::queue<TreeNode*> queue;
        queue.push(root);
        while (!queue.empty()) {
            long count = 0;
            long sum = 0;
            std::queue<TreeNode*> line;
            while (!queue.empty()) {
                TreeNode *tmp = queue.front();
                queue.pop();
                sum += tmp->val;
                count++;
                if (tmp->left) {
                    line.push(tmp->left);
                }
                if (tmp->right) {
                    line.push(tmp->right);
                }
            }
            result.push_back(static_cast<double>(sum)/static_cast<double>(count));
            queue = line;
        }
        return result;
    }
};
