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
    bool isPalindrome(ListNode* head) {
        m_tmp = head;
        return cheack(head);
    }

private:
    bool cheack(ListNode *a) {
        if(a == nullptr) {
            return true;
        }

        if (!cheack(a->next)) {
            return false;
        }
        if (m_tmp->val != a->val) {
            return false;
        }
        m_tmp = m_tmp->next;
        return true;
    }

private:
    ListNode* m_tmp;
};
