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
	ListNode n1(4);
	ListNode n2(5);
	ListNode n3(1);
	ListNode n4(9);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;

    Solution sol;
	sol.deleteNode(&n2);
	
    assert_that(check(&n1, std::vector<int> {4,1,9}), "");
}

void test_2()
{
	ListNode n1(4);
	ListNode n2(5);
	ListNode n3(1);
	ListNode n4(9);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;

    Solution sol;
	sol.deleteNode(&n3);
	
    assert_that(check(&n1, std::vector<int> {4,5,9}), "");
}




int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	// run_test(test_3, "test_3");
	// run_test(test_4, "test_4");
	// run_test(test_5, "test_5");

    return 0;
}
