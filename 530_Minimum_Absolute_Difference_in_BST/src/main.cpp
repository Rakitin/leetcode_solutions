#include "solution.h"
#include "test.h"


void test_1()
{
	TreeNode n4(4);
	TreeNode n2(2);
	TreeNode n6(6);
	TreeNode n1(1);
	TreeNode n3(3);
	
	n4.left = &n2;
	n4.right = &n6;

	n2.left = &n1;
	n2.right = &n3;
	
	Solution sol;
	assert_that(sol.getMinimumDifference(&n4) == 1, "");
}

void test_2()
{
	TreeNode n1(1);
	TreeNode n0(0);
	TreeNode n48(48);
	TreeNode n12(12);
	TreeNode n49(49);
	
	n1.left = &n0;
	n1.right = &n48;

	n48.left = &n12;
	n48.right = &n49;
	
	Solution sol;
	assert_that(sol.getMinimumDifference(&n1) == 1, "");
}

void test_3()
{
	TreeNode n236(236);
	TreeNode n104(104);
	TreeNode n701(701);
	TreeNode n227(227);
	TreeNode n911(911);
	
	n236.left = &n104;
	n236.right = &n701;

	n104.right = &n227;

	n701.right = &n911;
	
	Solution sol;
	assert_that(sol.getMinimumDifference(&n236) == 9, "");
}


int main()
{
	// run_test(test_1, "test_1");
	// run_test(test_2, "test_2");
	run_test(test_3, "test_3");
	// run_test(test_4, "test_4");

	return 0;
}
