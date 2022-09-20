#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    TreeNode n3(3);
    TreeNode n9(9);
    TreeNode n20(20);
    n3.left = &n9;
    n3.right = &n20;
    TreeNode n15(15);
    TreeNode n7(7);
    n20.left = &n15;
    n20.right = &n7;


//    TreeNode n6(6);
//    TreeNode n10(10);
//    n9.left = &n6;
//    n9.right = &n10;

    Solution sol;
    assert_that(sol.averageOfLevels(&n3) == std::vector<double>{3.0, 14.5, 11.0}, "");
}



int main()
{
    run_test(test_1, "test_1");
//    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");

    return 0;
}
