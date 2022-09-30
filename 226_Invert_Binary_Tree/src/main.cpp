#include <iostream>
#include "solution.h"
#include "test.h"

bool check(TreeNode *a, TreeNode *b) {
	if (!a and !b) {
		return true;
	}
	if ((a and !b) or (!a and b) or 
		(!a->left xor !b->left) or (!a->right xor !b->right) or
		a->val != b->val) {
		return false;
	}
    return check(a->left, b->left) and check(a->right, b->right);
}

void test_1()
{
	TreeNode n4(4);
	TreeNode n2(2);
	TreeNode n7(7);
	TreeNode n1(1);
	TreeNode n3(3);
	TreeNode n6(6);
	TreeNode n9(9);
	n4.left = &n2;
	n4.right = &n7;
	n2.left = &n1;
	n2.right = &n3;
	n7.left = &n6;
	n7.right = &n9;

	TreeNode r4(4);
	TreeNode r2(2);
	TreeNode r7(7);
	TreeNode r1(1);
	TreeNode r3(3);
	TreeNode r6(6);
	TreeNode r9(9);
	r4.right = &r2;
	r4.left = &r7;
	r2.right = &r1;
	r2.left = &r3;
	r7.right = &r6;
	r7.left = &r9;
    
	Solution sol;
    assert_that(check(sol.invertTree(&n4), &r4) == true, "");
}



int main()
{
    run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");

    return 0;
}
