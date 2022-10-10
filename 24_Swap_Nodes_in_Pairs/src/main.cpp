#include "solution.h"
#include "test.h"

#include <vector>

bool check(ListNode *root, std::vector<int> v) 
{
	int i = 0;
	if (!root and !v.empty()) {
		return false;
	}
	while (root) {
		if (i >= v.size()) {
			return false;
		}
		if (root->val != v[i]) {
			return false;
		}
		root = root->next;
		i++;
	}
	return true;
}

void test_1()
{
	ListNode n1(1);
	ListNode n2(2);
	ListNode n3(3);
	ListNode n4(4);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	
	Solution sol;
	ListNode *r = sol.swapPairs(&n1);
	assert_that(check(r,{2,1,4,3}) == true, "");
}

void test_2()
{
	ListNode n1(1);
	ListNode n2(2);
	n1.next = &n2;
	
	Solution sol;
	ListNode *r = sol.swapPairs(&n1);
	assert_that(check(r,{2,1}) == true, "");
}

void test_3()
{
	ListNode n1(1);
	ListNode n2(2);
	ListNode n3(3);
	n1.next = &n2;
	n2.next = &n3;
	
	Solution sol;
	ListNode *r = sol.swapPairs(&n1);
	assert_that(check(r,{2,1,3}) == true, "");
}

void test_4()
{
	Solution sol;
	ListNode *r = sol.swapPairs(nullptr);
	assert_that(check(r,{}) == true, "");
}



int main()
{
	run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
