#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> nums {0,1,0,3,12};
	Solution sol;
	sol.moveZeroes(nums);
	assert_that(nums == std::vector<int>{1,3,12,0,0}, "");
}

void test_2()
{
	std::vector<int> nums {0};
	Solution sol;
	sol.moveZeroes(nums);
	assert_that(nums == std::vector<int>{0}, "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	// run_test(test_3, "test_3");

    return 0;
}
