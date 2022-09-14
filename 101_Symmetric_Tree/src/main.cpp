#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    TreeNode n1(1);
    TreeNode n12(2);
    TreeNode n22(2);
    n1.left = &n12;
    n1.right = &n22;

    TreeNode n13(3);
    TreeNode n14(4);
    n12.left = &n13;
    n12.right = &n14;

    TreeNode n23(4);
    TreeNode n24(3);
    n22.left = &n23;
    n22.right = &n24;

    Solution sol;
    assert_that(sol.isSymmetric(&n1) == true, "");
}

void test_2()
{
    TreeNode n1(1);
    TreeNode n12(2);
    TreeNode n22(2);
    n1.left = &n12;
    n1.right = &n22;

    TreeNode n13(3);
    n12.left = &n13;

    TreeNode n23(3);
    n22.left = &n23;

    Solution sol;
    assert_that(sol.isSymmetric(&n1) == false, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");

    return 0;
}
