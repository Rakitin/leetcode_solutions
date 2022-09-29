#pragma once


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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1 and !root2) {
			return nullptr;
		}
		TreeNode *n = new TreeNode();
		if(root1) {
			n->val += root1->val;
		}
		if(root2) {
			n->val += root2->val;
		}
		n->left = mergeTrees(root1 ? root1->left : nullptr, root2 ? root2->left : nullptr);
		n->right = mergeTrees(root1 ? root1->right : nullptr, root2 ? root2->right : nullptr);
		return n;
    }
};

