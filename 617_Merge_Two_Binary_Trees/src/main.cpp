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
	TreeNode a1(1);
	TreeNode a2(2);
	TreeNode a3(3);
	TreeNode a5(5);
	a1.left = &a3;
	a1.right = &a2;
	a3.left = &a5;

	TreeNode b2(2);
	TreeNode b1(1);
	TreeNode b3(3);
	TreeNode b4(4);
	TreeNode b7(7);
	b2.left = &b1;
	b2.right = &b3;
	b1.right = &b4;
	b3.right = &b7;


	TreeNode r3(3);
	TreeNode r4(4);
	TreeNode r5(5);
	TreeNode r5a(5);
	TreeNode r4a(4);
	TreeNode r7(7);
	r3.left = &r4;
	r3.right = &r5;
	r4.left = &r5a;
	r4.right = &r4a;
	r5.right = &r7;

    Solution sol;
    assert_that(check(sol.mergeTrees(&a1, &b2), &r3) == true, "");
}



int main()
{
    run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");

    return 0;
}
