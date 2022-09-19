#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    ListNode n1(3);
    ListNode n2(2);
    n1.next = &n2;
    ListNode n3(0);
    n2.next = &n3;
    ListNode n4(-4);
    n3.next = &n4;
    n4.next = &n2;

    Solution sol;
    assert_that(sol.hasCycle(&n1) == true, "");
}

void test_2()
{
    ListNode n1(1);
    ListNode n2(2);
    n1.next = &n2;

    Solution sol;
    assert_that(sol.hasCycle(&n1) == false, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");

    return 0;
}
