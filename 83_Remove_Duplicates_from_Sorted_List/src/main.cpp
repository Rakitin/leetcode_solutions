#include <iostream>
#include "solution.h"
#include "test.h"

#include <vector>

bool cheack(ListNode *head, const std::vector<int> &arr)
{
    if (!head && !arr.size()) {
        return true;
    }
    int i = 0;
    while (head) {
        if (i >= arr.size()) {
            return false;
        }
        if (head->val != arr[i]) {
            return false;
        }
        head = head->next;
        i++;
    }
    return true;
}


void test_1()
{
    ListNode n1(1);
    ListNode n2(1);
    n1.next = &n2;
    ListNode n3(2);
    n2.next = &n3;

    Solution sol;
    assert_that(cheack(sol.deleteDuplicates(&n1), std::vector<int>{1,2})  == true, "");
}

void test_2()
{
    ListNode n1(1);
    ListNode n2(1);
    n1.next = &n2;
    ListNode n3(1);
    n2.next = &n3;
    ListNode n4(2);
    n3.next = &n4;

    Solution sol;
    assert_that(cheack(sol.deleteDuplicates(&n1), std::vector<int>{1,2})  == true, "");
}

void test_3()
{
    ListNode n1(1);

    Solution sol;
    assert_that(cheack(sol.deleteDuplicates(&n1), std::vector<int>{1})  == true, "");
}

void test_4()
{
    ListNode n1(1);
    ListNode n2(1);
    n1.next = &n2;
    ListNode n3(2);
    n2.next = &n3;
    ListNode n4(3);
    n3.next = &n4;
    ListNode n5(3);
    n4.next = &n5;

    Solution sol;
    assert_that(cheack(sol.deleteDuplicates(&n1), std::vector<int>{1,2,3})  == true, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
