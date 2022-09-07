#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    ListNode node1(1);
    ListNode node2(2);
    node1.next = &node2;
    ListNode node3(2);
    node2.next = &node3;
    ListNode node4(1);
    node3.next = &node4;

    Solution sol;
    assert_that(sol.isPalindrome(&node1) == true, "");
}

void test_2()
{
    ListNode node1(1);
    ListNode node2(2);
    node1.next = &node2;

    Solution sol;
    assert_that(sol.isPalindrome(&node1) == false, "");
}

void test_3()
{
    ListNode node1(1);
    ListNode node2(2);
    node1.next = &node2;
    ListNode node3(3);
    node2.next = &node3;
    ListNode node4(1);
    node3.next = &node4;

    Solution sol;
    assert_that(sol.isPalindrome(&node1) == false, "");
}

void test_4()
{
    ListNode node1(1);

    Solution sol;
    assert_that(sol.isPalindrome(&node1) == true, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
