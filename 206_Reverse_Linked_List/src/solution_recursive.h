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
    ListNode* reverseList(ListNode* head) {
        if (!head) {
            return head;
        }
        return r(head, nullptr);
    }

private:
    ListNode* r(ListNode* node, ListNode* prev) {
        ListNode* head = nullptr;
        if (node->next) {
            head = r(node->next, node);
        }
        node->next = prev;
        return head ? head : (prev ? prev->next : node);
    }
};
