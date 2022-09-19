#include <iostream>
#include "solution.h"
#include "test.h"

bool check(ListNode *n1, ListNode *n2)
{
    while (n1 && n2) {
        if (n1->val != n2->val) {
            return false;
        }

        n1 = n1->next;
        n2 = n2->next;
    }
    return n1 == n2;
}

void test_1()
{
    ListNode n1(1);
    ListNode n2(2);
    n1.next = &n2;
    ListNode n3(6);
    n2.next = &n3;
    ListNode n4(3);
    n3.next = &n4;
    ListNode n5(4);
    n4.next = &n5;
    ListNode n6(5);
    n5.next = &n6;
    ListNode n7(6);
    n6.next = &n7;

    Solution sol;
    ListNode *r = sol.removeElements(&n1, 6);

    ListNode t1(1);
    ListNode t2(2);
    t1.next = &t2;
    ListNode t3(3);
    t2.next = &t3;
    ListNode t4(4);
    t3.next = &t4;
    ListNode t5(5);
    t4.next = &t5;

    assert_that(check(r, &t1)  == true, "");
}


int main()
{
    run_test(test_1, "test_1");
//    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");

    return 0;
}
