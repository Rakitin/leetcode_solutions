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
    ListNode n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    Solution sol;
    ListNode *r = sol.rotateRight(&n1, 2);
    assert_that(check(r, {4,5,1,2,3}) == true, "");
}

void test_2()
{
    ListNode n1(0);
    ListNode n2(1);
    ListNode n3(2);
    n1.next = &n2;
    n2.next = &n3;

    Solution sol;
    ListNode *r = sol.rotateRight(&n1, 4);
    assert_that(check(r, {2,0,1}) == true, "");
}

void test_3()
{
    ListNode n1(1);

    Solution sol;
    ListNode *r = sol.rotateRight(&n1, 1);
    assert_that(check(r, {1}) == true, "");
}

void test_4()
{
    ListNode n1(1);
    ListNode n2(2);
    n1.next = &n2;

    Solution sol;
    ListNode *r = sol.rotateRight(&n1, 1);
    assert_that(check(r, {2,1}) == true, "");
}

void test_5()
{
    ListNode n1(1);
    ListNode n2(2);
    ListNode n3(3);
    n1.next = &n2;
    n2.next = &n3;

    Solution sol;
    ListNode *r = sol.rotateRight(&n1, 2000000000);
    assert_that(check(r, {2,3,1}) == true, "");
}

void test_6()
{
    ListNode n1(1);
    ListNode n2(2);
    n1.next = &n2;

    Solution sol;
    ListNode *r = sol.rotateRight(&n1, 3);
    assert_that(check(r, {2,1}) == true, "");
}

int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
	run_test(test_5, "test_5");
    run_test(test_6, "test_6");

    return 0;
}
