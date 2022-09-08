#pragma once

#include <iostream>



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *cur1{l1};
        ListNode *cur2{l2};
        ListNode *start = new ListNode(0);
        ListNode *prev = start;
        int carry = 0;
        while (cur1 || cur2 || carry) {
            int sum = (cur1 ? cur1->val : 0) + (cur2 ? cur2->val : 0) + carry;
            carry = 0;
            if (sum > 9) {
                sum -= 10;
                carry = 1;
            }
            ListNode *new_node = new ListNode(sum);
            prev->next = new_node;
            prev = new_node;

            cur1 = cur1 ? cur1->next : cur1;
            cur2 = cur2 ? cur2->next : cur2;
        }
        return start->next;
    }

};
