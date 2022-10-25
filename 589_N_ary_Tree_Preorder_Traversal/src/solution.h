#pragma once

#include <iostream>

#include <vector>
#include <stack>

class Node {
public:
    int val;
    std::vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, std::vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    std::vector<int> preorder(Node* root) {
		std::vector<int> result;
		if (!root) {
			return result;
		}
		std::stack<Node *> buf;
		buf.push(root);
		while (!buf.empty()) {
			Node *cur = buf.top();
			buf.pop();
			result.push_back(cur->val);
			if (cur->children.size()) {
				for (int i = cur->children.size() - 1; i >= 0; --i) {
					buf.push(cur->children[i]);
				}
			}
		}
		return result;
    }
};