#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    ListNode n1(1);
    ListNode n2(2);
    n1.next = &n2;
    ListNode n3(3);
    n2.next = &n3;
    ListNode n4(4);
    n3.next = &n4;
    ListNode n5(5);
    n4.next = &n5;

    Solution sol;
    assert_that(sol.middleNode(&n1) == &n3, "");
}

void test_2()
{
    ListNode n1(1);
    ListNode n2(2);
    n1.next = &n2;
    ListNode n3(3);
    n2.next = &n3;
    ListNode n4(4);
    n3.next = &n4;
    ListNode n5(5);
    n4.next = &n5;
    ListNode n6(6);
    n5.next = &n6;

    Solution sol;
    assert_that(sol.middleNode(&n1) == &n4, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.middleNode(nullptr) == nullptr, "");
}

void test_4()
{
    ListNode n1(1);
    Solution sol;
    assert_that(sol.middleNode(&n1) == &n1, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
