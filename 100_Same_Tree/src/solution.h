#pragma once

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <iostream>
#include <stack>

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!is(p, q)) {
            return false;
        }

        std::stack<TreeNode *> stP;
        std::stack<TreeNode *> stQ;
        TreeNode *curP = p;
        TreeNode *curQ = q;
        while ((curP || !stP.empty()) && (curQ || !stQ.empty())) {

            if (!is(curP, curQ)) {
                return false;
            }

            if (curP) {
                if (!is(curP->left, curQ->left)) {
                    return false;
                }

                stP.push(curP);
                curP = curP->left;

                stQ.push(curQ);
                curQ = curQ->left;
            }
            else {
                curP = stP.top();
                stP.pop();

                curQ = stQ.top();
                stQ.pop();

                if (curP->val != curQ->val) {
                    return false;
                }

                if (!is(curP->right, curQ->right)) {
                    return false;
                }

                curP = curP->right;
                curQ = curQ->right;
            }
        }
        return true;
    }

private:
    bool is(TreeNode* p, TreeNode* q) {
        return (p && q) || (!p && !q);
    }

};
