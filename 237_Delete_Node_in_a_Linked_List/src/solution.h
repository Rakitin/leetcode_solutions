#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
	void deleteNode(ListNode* node) {
		while (node) {
			if (node->next) {
				node->val = node->next->val;
			}
			if (node->next->next == nullptr) {
				node->next = nullptr;
			}
			node = node->next;
		}
		
	}
};
