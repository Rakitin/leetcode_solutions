#pragma once

#include <deque>

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
        int val = m_q.back()->val;
        m_q.pop_back();
        return val;
    }

    bool hasNext() {
        return !m_q.empty();
    }

private:
    void fill(TreeNode* root) {
        if (root->right) {
            fill(root->right);
        }
        m_q.push_back(root);
        if (root->left) {
            fill(root->left);
        }
    }

private:
    std::deque<TreeNode *> m_q;
};
