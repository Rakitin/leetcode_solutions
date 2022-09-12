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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *root = nullptr;
        ListNode *prev = root;

        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        while (cur1 || cur2) {
            ListNode *newNode = new ListNode;
            if (!root) {
                root = newNode;
            }
            if (prev) {
                prev->next = newNode;
            }
            if (cur1 && cur2) {
                if (cur1->val < cur2->val) {
                    newNode->val = cur1->val;
                    cur1 = cur1->next;
                }
                else {
                    newNode->val = cur2->val;
                    cur2 = cur2->next;
                }
                prev = newNode;
            }
            else if (cur1) {
                newNode->val = cur1->val;
                cur1 = cur1->next;
                prev = newNode;
            }
            else {
                newNode->val = cur2->val;
                cur2 = cur2->next;
                prev = newNode;
            }
        }
        return root;
    }
};
