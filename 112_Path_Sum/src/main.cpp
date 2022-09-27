#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
	TreeNode n5(5);
	TreeNode n4(4);
	TreeNode n8(8);
	TreeNode n11(11);
	TreeNode n7(7);
	TreeNode n2(2);
	TreeNode n13(13);
	TreeNode n4a(4);
	TreeNode n1(1);

	n5.left = &n4;
	n5.right = &n8;
	
	n4.left = &n11;
	n11.left = &n7;
	n11.right = &n2;

	n8.left = &n13;
	n8.right = &n4a;
	n4.right = &n1;
	
    Solution sol;
    assert_that(sol.hasPathSum(&n5, 22) == true, "");
}

void test_2()
{
	TreeNode n1(1);
	TreeNode n2(2);
	TreeNode n3(3);
	n1.left = &n2;
	n1.right = &n3;
    
	Solution sol;
    assert_that(sol.hasPathSum(&n1, 5) == false, "");
}

void test_3()
{
	Solution sol;
    assert_that(sol.hasPathSum(nullptr, 0) == false, "");
}

void test_4()
{
	TreeNode n0(0);
    
	Solution sol;
    assert_that(sol.hasPathSum(&n0, 0) == true, "");
}

void test_5()
{
	TreeNode n1(1);
	TreeNode n2(2);
	TreeNode n3(3);
	n1.left = &n2;
	n1.right = &n3;
    
	Solution sol;
    assert_that(sol.hasPathSum(&n1, 3) == true, "");
}

int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");
	run_test(test_4, "test_4");
	run_test(test_5, "test_5");

    return 0;
}
