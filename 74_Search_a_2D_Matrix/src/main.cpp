#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<std::vector<int>> matrix {
		std::vector<int>{1,3,5,7},
		std::vector<int>{10,11,16,20},
		std::vector<int>{23,30,34,60}
	};
    Solution sol;
    assert_that(sol.searchMatrix(matrix, 3) == true, "");
}

void test_2()
{
	std::vector<std::vector<int>> matrix {
		std::vector<int>{1,3,5,7},
		std::vector<int>{10,11,16,20},
		std::vector<int>{23,30,34,60}
	};
    Solution sol;
    assert_that(sol.searchMatrix(matrix, 13) == false, "");
}

void test_3()
{
	std::vector<std::vector<int>> matrix {
		std::vector<int>{1,3,5,7},
		std::vector<int>{10,11,16,20},
		std::vector<int>{23,30,34,60}
	};
    Solution sol;
    assert_that(sol.searchMatrix(matrix, 70) == false, "");
}

void test_4()
{
	std::vector<std::vector<int>> matrix {
		std::vector<int>{1}
	};
    Solution sol;
    assert_that(sol.searchMatrix(matrix, 1) == true, "");
}


int main()
{
	run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
