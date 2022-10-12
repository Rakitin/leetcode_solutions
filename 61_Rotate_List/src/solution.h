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
    ListNode* rotateRight(ListNode *head, int k) {
        if (!head or !k or !head->next) {
            return head;
        }
		ListNode *cur = head;
		int count = 1;
		while (cur->next) {
			++count;
			cur = cur->next;
		}
		cur->next = head;
		k = k % count;
		k = count - k;
		while (k) {
			cur = cur->next;
			--k;
		}
		head = cur->next;
		cur->next = nullptr;
		return head;
    }
};
