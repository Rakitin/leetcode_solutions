#include <iostream>
#include "solution2.h"
#include "test.h"

void test_1()
{
    TreeNode n11(1);
    TreeNode n12(2);
    TreeNode n13(3);
    n11.left = &n12;
    n11.right = &n13;

    TreeNode n21(1);
    TreeNode n22(2);
    TreeNode n23(3);
    n21.left = &n22;
    n21.right = &n23;

    Solution sol;
    assert_that(sol.isSameTree(&n11, &n21) == true, "");
}

void test_2()
{
    TreeNode n11(1);
    TreeNode n12(2);
    n11.left = &n12;

    TreeNode n21(1);
    TreeNode n22(2);
    n21.right = &n22;

    Solution sol;
    assert_that(sol.isSameTree(&n11, &n21) == false, "");
}

void test_3()
{
    TreeNode n11(1);
    TreeNode n12(2);
    TreeNode n13(3);
    n11.left = &n12;
    n11.right = &n13;

    TreeNode n21(1);
    TreeNode n22(2);
    TreeNode n23(3);
    n21.left = &n23;
    n21.right = &n22;

    Solution sol;
    assert_that(sol.isSameTree(&n11, &n21) == false, "");
}

void test_4()
{
    TreeNode n11(1);
    Solution sol;
    assert_that(sol.isSameTree(&n11, nullptr) == false, "");
}

void test_5()
{
    TreeNode n21(1);
    Solution sol;
    assert_that(sol.isSameTree(nullptr, &n21) == false, "");
}

void test_6()
{
    TreeNode n11(1);

    TreeNode n21(1);
    TreeNode n22(2);
    n21.right = &n22;

    Solution sol;
    assert_that(sol.isSameTree(&n11, &n21) == false, "");
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
