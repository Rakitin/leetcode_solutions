#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    TreeNode n1(1);

    TreeNode n2(2);
    n1.right = &n2;

    TreeNode n3(3);
    n2.left = &n3;

    Solution sol;
    assert_that(sol.inorderTraversal(&n1) == std::vector<int>{1, 3, 2}, "");
}

void test_2()
{
    TreeNode n1(1);

    Solution sol;
    assert_that(sol.inorderTraversal(&n1) == std::vector<int>{1}, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.inorderTraversal(nullptr) == std::vector<int>{}, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_2");

    return 0;
}
