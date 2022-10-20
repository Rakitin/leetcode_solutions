#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> nums{1,2,3,4};
    Solution sol;
    assert_that(sol.runningSum(nums) == std::vector<int>{1,3,6,10}, "");
}




int main()
{
	run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");
    // run_test(test_4, "test_4");

    return 0;
}
