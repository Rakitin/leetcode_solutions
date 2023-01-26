#include "solution.h"
#include "test.h"


void test_1()
{
	std::vector<int> nums { 5,7,7,8,8,10 };
	Solution sol;
	assert_that(sol.searchRange(nums, 8) == std::vector<int>{ 3,4 }, "");
}

void test_2()
{
	std::vector<int> nums { 5,7,7,8,8,10 };
	Solution sol;
	assert_that(sol.searchRange(nums, 6) == std::vector<int>{ -1,-1 }, "");
}

void test_3()
{
	std::vector<int> nums { };
	Solution sol;
	assert_that(sol.searchRange(nums, 0) == std::vector<int>{ -1,-1 }, "");
}

void test_4()
{
	std::vector<int> nums { 2,2 };
	Solution sol;
	assert_that(sol.searchRange(nums, 2) == std::vector<int>{ 0,1 }, "");
}

void test_5()
{
	std::vector<int> nums { 2,2 };
	Solution sol;
	assert_that(sol.searchRange(nums, 3) == std::vector<int>{ -1,-1 }, "");
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
