#pragma once


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prev = nullptr;
		ListNode *del = nullptr;
		ListNode *cur = head;
		while (cur) {
			if (n > 0) {
				--n;
			}
			else {
				prev = prev ? prev->next : head;
			}
			if (!n) {
				del = del ? del->next : head;
			}
			cur = cur->next;
		}
		if (del == head) {
			return del->next;
		}
		if (prev) {
			prev->next = prev->next ? prev->next->next : prev->next;
		}
		return head;
    }
};