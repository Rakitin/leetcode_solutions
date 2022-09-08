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

class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        fill(root);
    }

    int next() {
        --m_index;
        int val = m_arr[m_index]->val;
        return val;
    }

    bool hasNext() {
        return m_index > 0;
    }

private:
    void fill(TreeNode* root) {
        if (root->right) {
            fill(root->right);
        }
        m_arr.push_back(root);
        m_index++;
        if (root->left) {
            fill(root->left);
        }
    }

private:
    std::vector<TreeNode *> m_arr;
    int m_index = 0;
};
