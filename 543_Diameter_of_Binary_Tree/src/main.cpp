#include "solution.h"
#include "test.h"

#include <iostream>

void test_1()
{
	TreeNode n1(1);
	TreeNode n2(2);
	TreeNode n3(3);
	TreeNode n4(4);
	TreeNode n5(5);
	n1.left = &n2;
	n1.right = &n3;
	
	n2.left = &n4;
	n2.right = &n5;

    Solution sol;
    assert_that(sol.diameterOfBinaryTree(&n1) == 3, "");
}

void test_2()
{
	TreeNode n1(1);
	TreeNode n2(2);
	n1.left = &n2;

	Solution sol;
    assert_that(sol.diameterOfBinaryTree(&n1) == 1, "");
}

// [4,-7,-3,null,null,-9,-3,9,-7,-4,null,6,null,-6,-6,null,null,0,6,5,null,9,null,null,-1,-4,null,null,null,-2]

void test_3()
{
	TreeNode n1(1);
	TreeNode n2(2);
	n1.left = &n2;

	Solution sol;
    assert_that(sol.diameterOfBinaryTree(&n1) == 1, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    // run_test(test_3, "test_3");

    return 0;
}
