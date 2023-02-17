#include "solution.h"
#include "test.h"

#include <vector>

bool check(const ListNode *head, const std::vector<int> &v)
{
	size_t i { 0 };
	while (head) {
		if (i >= v.size()) {
			return false;
		}
		if (head->val != v[i]) {
			return false;
		}
		++i;
		head = head->next;
	}
	return i == v.size();
}

void test_1()
{
	ListNode n1(1);
	ListNode n2(3);
	ListNode n3(4);
	ListNode n4(7);
	ListNode n5(1);
	ListNode n6(2);
	ListNode n7(6);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	n5.next = &n6;
	n6.next = &n7;

    Solution sol;
    assert_that(check(sol.deleteMiddle(&n1), std::vector<int> {1,3,4,1,2,6}), "");
}

void test_2()
{
	ListNode n1(1);
	ListNode n2(2);
	ListNode n3(3);
	ListNode n4(4);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;

    Solution sol;
    assert_that(check(sol.deleteMiddle(&n1), std::vector<int> {1,2,4}), "");
}

void test_3()
{
	ListNode n1(2);
	ListNode n2(1);

	n1.next = &n2;

    Solution sol;
    assert_that(check(sol.deleteMiddle(&n1), std::vector<int> {2}), "");
}

void test_4()
{
	ListNode n1(1);

    Solution sol;
    assert_that(check(sol.deleteMiddle(&n1), std::vector<int> {}), "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");
	run_test(test_4, "test_4");
	// run_test(test_5, "test_5");

    return 0;
}
