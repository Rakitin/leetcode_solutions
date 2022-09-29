#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> original {1,2,3,4};
	std::vector<std::vector<int>> result {
		std::vector<int>{1,2}, 
		std::vector<int>{3,4}
	};
    Solution sol;
    assert_that(sol.construct2DArray(original, 2, 2) == result, "");
}

void test_2()
{
	std::vector<int> original {1,2,3};
	std::vector<std::vector<int>> result {
		std::vector<int>{1,2,3}
	};
    Solution sol;
    assert_that(sol.construct2DArray(original, 1, 3) == result, "");
}

void test_3()
{
	std::vector<int> original {1,2};
	std::vector<std::vector<int>> result {};
    Solution sol;
    assert_that(sol.construct2DArray(original, 1, 1) == result, "");
}

void test_4()
{
	std::vector<int> original {3};
	std::vector<std::vector<int>> result {};
    Solution sol;
    assert_that(sol.construct2DArray(original, 1, 2) == result, "");
}

void test_5()
{
	std::vector<int> original {1,1,1,1};
	std::vector<std::vector<int>> result {
		std::vector<int>{1},
		std::vector<int>{1},
		std::vector<int>{1},
		std::vector<int>{1}
	};
    Solution sol;
    assert_that(sol.construct2DArray(original, 4, 1) == result, "");
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
