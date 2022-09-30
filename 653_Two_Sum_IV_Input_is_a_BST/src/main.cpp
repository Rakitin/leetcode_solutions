#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    TreeNode n5(5);

    TreeNode n3(3);
    TreeNode n6(6);
    n5.left = &n3;
    n5.right = &n6;

    TreeNode n2(2);
    TreeNode n4(4);
    n3.left = &n2;
    n3.right = &n4;

    TreeNode n7(7);
    n6.right = &n7;

    int target = 9;
    Solution sol;
    assert_that(sol.findTarget(&n5, target) == true, "");
}



int main()
{
    run_test(test_1, "test_1");

    return 0;
}
