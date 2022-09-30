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

    TreeNode n23(15);
    TreeNode n24(7);
    n22.left = &n23;
    n22.right = &n24;

    Solution sol;
    assert_that(sol.isBalanced(&n1) == true, "");
}

void test_2()
{
    TreeNode n1(1);
    TreeNode n12(2);
    TreeNode n22(2);
    n1.left = &n12;
    n1.right = &n22;

    TreeNode n121(3);
    TreeNode n122(3);
    n12.left = &n121;
    n12.right = &n122;

    TreeNode n1211(4);
    TreeNode n1212(4);
    n121.left = &n1211;
    n121.right = &n1212;


    Solution sol;
    assert_that(sol.isBalanced(&n1) == false, "");
}

int main()
{
    run_test(test_1, "test_1");
//    run_test(test_2, "test_2");

    return 0;
}
