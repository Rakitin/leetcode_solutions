#pragma once

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
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        if (nums.empty()) {
            return nullptr;
        }
        return create(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* create(std::vector<int>& nums, int l, int r) {
        if (r < l) {
            return nullptr;
        }
        int mid = (l + r) / 2;
        TreeNode *node = new TreeNode(nums[mid]);
        node->left = create(nums, l, mid - 1);
        node->right = create(nums, mid + 1, r);
        return node;
    }

};
