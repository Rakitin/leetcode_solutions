#include "solution.h"
#include "test.h"

void test_1()
{
	TreeNode n1(1);
	TreeNode n2(2);
	TreeNode n3(3);
	n1.right = &n2;
	n2.left = &n3;
    Solution sol;
    assert_that(sol.preorderTraversal(&n1) == std::vector<int> {1,2,3}, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.preorderTraversal(nullptr) == std::vector<int> {}, "");
}

void test_3()
{
	TreeNode n1(1);
    Solution sol;
    assert_that(sol.preorderTraversal(&n1) == std::vector<int> {1}, "");
}



int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");
	// run_test(test_4, "test_4");
	// run_test(test_5, "test_5");

    return 0;
}
