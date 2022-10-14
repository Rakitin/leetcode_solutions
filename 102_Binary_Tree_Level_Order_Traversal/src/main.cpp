#include "solution.h"
#include "test.h"


void test_1()
{
	TreeNode n3(3);
	TreeNode n9(9);
	TreeNode n20(20);
	TreeNode n15(15);
	TreeNode n7(7);
	n3.left = &n9;
	n3.right = &n20;
	n20.left = &n15;
	n20.right = &n7;

	std::vector<std::vector<int>> result {
		std::vector<int>{3},
		std::vector<int>{9,20},
		std::vector<int>{15,7}
	};

    Solution sol;
    assert_that(sol.levelOrder(&n3) == result, "");
}

void test_2()
{
	TreeNode n1(1);

	std::vector<std::vector<int>> result {
		std::vector<int>{1}
	};

    Solution sol;
    assert_that(sol.levelOrder(&n1) == result, "");
}

void test_3()
{
	std::vector<std::vector<int>> result {
	};

    Solution sol;
    assert_that(sol.levelOrder(nullptr) == result, "");
}

void test_4()
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

	std::vector<std::vector<int>> result {
		std::vector<int>{1},
		std::vector<int>{2,3},
		std::vector<int>{4,5}
	};

    Solution sol;
    assert_that(sol.levelOrder(&n1) == result, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
