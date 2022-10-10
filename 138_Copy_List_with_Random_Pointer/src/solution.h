#pragma once

#include <map>


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

// Solution without extra space
class Solution {
public:
    Node* copyRandomList(Node* head) {
		if (!head) {
			return nullptr;
		}
		Node *cur = head;
		while (cur) {
			Node *copy = new Node(cur->val);
			copy->next = cur->next;
			cur->next = copy;
			cur = cur->next->next;
		}
		cur = head;
		while (cur) {
			Node *copy = cur->next;
			if (cur->random) {
				copy->random = cur->random->next;
			}
			cur = cur->next->next;
		}
		cur = head;
		Node *result = cur->next;
		while (cur) {
			Node *tmp = cur->next;
			cur->next = cur->next ? cur->next->next : nullptr;
			tmp->next = tmp->next ? tmp->next->next : nullptr;
			cur = cur->next;
		}
		return result;
    }
};


// Solution with extra space
// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
// 		std::map<Node *, Node *> d;
// 		Node *prev = nullptr;
// 		Node *result = nullptr;
// 		Node *cur1 = head;
//         while (cur1) {
// 			Node *copy = new Node(cur1->val);
// 			d[cur1] = copy;
// 			if (prev) {
// 				prev->next = copy;
// 			}
// 			else {
// 				result = copy;
// 			}
// 			prev = copy;
// 			cur1 = cur1->next;
// 		}
// 		cur1 = head;
// 		Node *cur2 = result;
// 		while (cur1 and cur2) {
// 			if (cur1->random) {
// 				cur2->random = d[cur1->random];
// 			}
// 			cur1 = cur1->next;
// 			cur2 = cur2->next;
// 		}
// 		return result;
//     }
// };
