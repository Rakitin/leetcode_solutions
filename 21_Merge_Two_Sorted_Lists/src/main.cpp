#include <iostream>
#include "solution.h"
#include "test.h"

#include <vector>

bool check(const ListNode *n, const std::vector<int> &arr)
{
    int i {0};
    while (n) {
        if (n->val != arr[i]) {
            return false;
        }
        n = n->next;
        ++i;
    }
    if (i != arr.size())
        return false;
    return true;
}


void test_1()
{
    ListNode n11(1);
    ListNode n12(2);
    n11.next = &n12;
    ListNode n13(4);
    n12.next = &n13;

    ListNode n21(1);
    ListNode n22(3);
    n21.next = &n22;
    ListNode n23(4);
    n22.next = &n23;

    Solution sol;
    ListNode *n = sol.mergeTwoLists(&n11, &n21);

    std::vector<int> arr {1, 1, 2, 3, 4, 4};
    assert_that(check(n, arr) == true, "");
}

void test_2()
{
    Solution sol;
    ListNode *n = sol.mergeTwoLists(nullptr, nullptr);
    assert_that(n == nullptr, "");
}

void test_3()
{
    ListNode n21(0);

    Solution sol;
    ListNode *n = sol.mergeTwoLists(nullptr, &n21);

    std::vector<int> arr {0};
    assert_that(check(n, arr) == true, "");
}

void test_4()
{
    ListNode n11(5);

    ListNode n21(1);
    ListNode n22(2);
    n21.next = &n22;
    ListNode n23(4);
    n22.next = &n23;

    Solution sol;
    ListNode *n = sol.mergeTwoLists(&n11, &n21);

    std::vector<int> arr {1, 2, 4, 5};
    assert_that(check(n, arr) == true, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
