#include <iostream>
#include <vector>
#include "solution.h"
#include "test.h"

bool cheack(ListNode *head, const std::vector<int> &arr)
{
    bool result = false;
    auto it = arr.cbegin();
    while (head && it != arr.cend()) {
        if (head->val == *it) {
            result = true;
        }
        else {
            return false;
        }
        ++it;
        head = head->next;
    }
    return result;
}

void test_1()
{
    ListNode n11(2);
    ListNode n12(4);
    n11.next = &n12;
    ListNode n13(3);
    n12.next = &n13;

    ListNode n21(5);
    ListNode n22(6);
    n21.next = &n22;
    ListNode n23(4);
    n22.next = &n23;

    Solution sol;
    std::vector<int> arr{7,0,8};
    assert_that(cheack(sol.addTwoNumbers(&n11, &n21), arr) == true, "");
}

/*
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/

void test_2()
{
    ListNode n11(9);
    ListNode n12(9);
    n11.next = &n12;
    ListNode n13(9);
    n12.next = &n13;
    ListNode n14(9);
    n13.next = &n14;
    ListNode n15(9);
    n14.next = &n15;
    ListNode n16(9);
    n15.next = &n16;
    ListNode n17(9);
    n16.next = &n17;

    ListNode n21(9);
    ListNode n22(9);
    n21.next = &n22;
    ListNode n23(9);
    n22.next = &n23;
    ListNode n24(9);
    n23.next = &n24;

    Solution sol;
    std::vector<int> arr{8,9,9,9,0,0,0,1};
    assert_that(cheack(sol.addTwoNumbers(&n11, &n21), arr) == true, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");

    return 0;
}
