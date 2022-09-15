#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    TreeNode n1(3);
    TreeNode n12(9);
    TreeNode n22(20);
    n1.left = &n12;
    n1.right = &n22;

    TreeNode n221(15);
    TreeNode n222(7);
    n22.left = &n221;
    n22.right = &n222;

    Solution sol;
    assert_that(sol.minDepth(&n1) == 2, "");
}

void test_2()
{
    TreeNode n1(2);
    TreeNode n22(3);
    n1.right = &n22;

    TreeNode n222(4);
    n22.right = &n222;

    TreeNode n2222(5);
    n222.right = &n2222;

    TreeNode n22222(6);
    n2222.right = &n22222;

    Solution sol;
    assert_that(sol.minDepth(&n1) == 5, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");

    return 0;
}
