#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    TreeNode n1(3);
    TreeNode n12(9);
    TreeNode n22(2);
    n1.left = &n12;
    n1.right = &n22;

    TreeNode n23(15);
    TreeNode n24(7);
    n22.left = &n23;
    n22.right = &n24;

    Solution sol;
    assert_that(sol.maxDepth(&n1) == 3, "");
}

void test_2()
{
    TreeNode n1(1);
    TreeNode n22(2);
    n1.right = &n22;

    Solution sol;
    assert_that(sol.maxDepth(&n1) == 2, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.maxDepth(nullptr) == 0, "");
}

void test_4()
{
    TreeNode n1(1);

    Solution sol;
    assert_that(sol.maxDepth(&n1) == 1, "");
}

void test_5()
{
    TreeNode n1(1);
    TreeNode n11(2);
    TreeNode n21(3);
    n1.left = &n11;
    n1.right = &n21;
    TreeNode n111(4);
    TreeNode n112(5);
    n11.left = &n111;
    n11.right = &n112;

    Solution sol;
    assert_that(sol.maxDepth(&n1) == 3, "");
}

void test_6()
{
    TreeNode n1(1);
    TreeNode n11(2);
    TreeNode n21(3);
    n1.left = &n11;
    n1.right = &n21;
    TreeNode n121(4);
    TreeNode n122(5);
    n21.left = &n121;
    n21.right = &n122;

    Solution sol;
    assert_that(sol.maxDepth(&n1) == 3, "");
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
