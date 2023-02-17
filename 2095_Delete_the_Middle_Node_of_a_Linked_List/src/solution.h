#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
	ListNode* deleteMiddle(ListNode *head) {
		ListNode *slow { head };
		ListNode *fast { head->next };
		ListNode *prev { nullptr };
		while (fast) {
			prev = slow;
			slow = slow->next;
			fast = fast->next;
			if (fast) {
				fast = fast->next;
			}
		}
		if (prev) {
			prev->next = slow->next;
		}
		else {
			return nullptr;
		}
		return head;	
	}
};
