#pragma once

#include <iostream>
#include <deque>

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

    //    bool findTarget(TreeNode* root, int k) {
    //        std::cout << root->val << std::endl;
    //        if (root->left) {
    //            findTarget(root->left, k);
    //        }
    //        if (root->right) {
    //            findTarget(root->right, k);
    //        }
    //        return false;
    //    }

    bool findTarget(TreeNode* root, int k) {
        std::deque<TreeNode *> q;
        do {
            std::cout << root->val << std::endl;
            if (root->right) {
                q.push_back(root->right);
            }
            if (root->left) {
                q.push_back(root->left);
            }
            if(!q.empty()) {
                root = q.back();
                q.pop_back();
            }
            else {
                root = nullptr;
            }
        } while (root);
        return false;
    }

};
