#include <iostream>
#include "solution_recursive.h"
#include "test.h"

bool cheack(ListNode *head, int arr[], size_t arrLen)
{
    if (!head && !arrLen) {
        return true;
    }
    bool result = false;
    int i = 0;
    while (head && i < arrLen) {
        result = head->val == arr[i];
        if (!result) {
            break;
        }
        head = head->next;
        ++i;
    }
    return result;
}

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
    ListNode *n = sol.reverseList(&n1);

    int arr[]{5, 4, 3, 2, 1};
    assert_that(cheack(n, arr, sizeof(arr) / sizeof(arr[0])) == true, "");
}

void test_2()
{
    ListNode n1(1);
    ListNode n2(2);
    n1.next = &n2;

    Solution sol;
    ListNode *n = sol.reverseList(&n1);

    int arr[]{2, 1};
    assert_that(cheack(n, arr, sizeof(arr) / sizeof(arr[0])) == true, "");
}

void test_3()
{
    ListNode n1(1);

    Solution sol;
    ListNode *n = sol.reverseList(&n1);

    int arr[]{1};
    assert_that(cheack(n, arr, sizeof(arr) / sizeof(arr[0])) == true, "");
}

void test_4()
{
    Solution sol;
    ListNode *n = sol.reverseList(nullptr);

    int arr[]{};
    assert_that(cheack(n, arr, sizeof(arr) / sizeof(arr[0])) == true, "");
}


int main()
{
//    run_test(test_1, "test_1");
//    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
