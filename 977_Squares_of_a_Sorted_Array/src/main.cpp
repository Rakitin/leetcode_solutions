#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> nums {-4,-1,0,3,10};
    Solution sol;
    assert_that(sol.sortedSquares(nums) == std::vector<int>{0,1,9,16,100}, "");
}

void test_2()
{
	std::vector<int> nums {-7,-3,2,3,11};
    Solution sol;
    assert_that(sol.sortedSquares(nums) == std::vector<int>{4,9,9,49,121}, "");
}

void test_3()
{
	std::vector<int> nums {-7,-3,-2,-1,2,3,11};
    Solution sol;
    assert_that(sol.sortedSquares(nums) == std::vector<int>{1,4,4,9,9,49,121}, "");
}

void test_4()
{
	std::vector<int> nums {-1,2,3,11};
    Solution sol;
    assert_that(sol.sortedSquares(nums) == std::vector<int>{1,4,9,121}, "");
}

void test_5()
{
	std::vector<int> nums {0,2,3,11};
    Solution sol;
    assert_that(sol.sortedSquares(nums) == std::vector<int>{0,4,9,121}, "");
}

void test_6()
{
	std::vector<int> nums {};
    Solution sol;
    assert_that(sol.sortedSquares(nums) == std::vector<int>{}, "");
}

void test_7()
{
	std::vector<int> nums {-1};
    Solution sol;
    assert_that(sol.sortedSquares(nums) == std::vector<int>{1}, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
    run_test(test_5, "test_5");
    run_test(test_6, "test_6");
    run_test(test_7, "test_7");

    return 0;
}
