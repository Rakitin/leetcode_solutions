#include "solution.h"
#include "test.h"

void test_1()
{
	ListNode a1(1);
	ListNode a2(2);

	ListNode b1(1);
	ListNode b2(2);
	ListNode b3(3);

	ListNode c1(1);
	ListNode c2(2);
	ListNode c3(3);

	a1.next = &a2;
	a2.next = &c1;

	b1.next = &b2;
	b2.next = &b3;
	b3.next = &c1;

	c1.next = &c2;
	c2.next = &c3;

    Solution sol;
    assert_that(sol.getIntersectionNode(&a1, &b1) == &c1, "");
}

void test_2()
{
	ListNode a1(1);
	ListNode a2(9);
	ListNode a3(1);

	ListNode b1(3);

	ListNode c1(2);
	ListNode c2(4);

	a1.next = &a2;
	a2.next = &a3;
	a3.next = &c1;

	b1.next = &c1;

	c1.next = &c2;

    Solution sol;
    assert_that(sol.getIntersectionNode(&a1, &b1) == &c1, "");
}

void test_3()
{
	ListNode a1(2);
	ListNode a2(6);
	ListNode a3(4);

	ListNode b1(1);
	ListNode b2(5);

	a1.next = &a2;
	a2.next = &a3;

	b1.next = &b2;

    Solution sol;
    assert_that(sol.getIntersectionNode(&a1, &b1) == nullptr, "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");
	// run_test(test_4, "test_4");
	// run_test(test_5, "test_5");

    return 0;
}
