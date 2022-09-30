#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    TreeNode n1(3);
    TreeNode n11(4);
    TreeNode n12(5);
    n1.left = &n11;
    n1.right = &n12;

    TreeNode n111(1);
    TreeNode n112(2);
    n11.left = &n111;
    n11.right = &n112;

    TreeNode s1(4);
    TreeNode s11(1);
    TreeNode s12(2);
    s1.left = &s11;
    s1.right = &s12;

    Solution sol;
    assert_that(sol.isSubtree(&n1, &s1) == true, "");
}

void test_2()
{
    TreeNode n1(3);
    TreeNode n11(4);
    TreeNode n12(5);
    n1.left = &n11;
    n1.right = &n12;

    TreeNode n111(1);
    TreeNode n112(2);
    n11.left = &n111;
    n11.right = &n112;

    TreeNode n1121(0);
    n112.left = &n1121;

    TreeNode s1(4);
    TreeNode s11(1);
    TreeNode s12(2);
    s1.left = &s11;
    s1.right = &s12;

    Solution sol;
    assert_that(sol.isSubtree(&n1, &s1) == false, "");
}

void test_3()
{
    TreeNode n1(1);

    TreeNode s1(1);

    Solution sol;
    assert_that(sol.isSubtree(&n1, &s1) == true, "");
}

void test_4()
{
    TreeNode n1(1);
    TreeNode n11(1);
    n1.left = &n11;

    TreeNode s1(1);

    Solution sol;
    assert_that(sol.isSubtree(&n1, &s1) == true, "");
}


int main()
{
//    run_test(test_1, "test_1");
//    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
