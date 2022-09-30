#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> nums {4,3,2,7,8,2,3,1};
    Solution sol;
    assert_that(sol.findDuplicates(nums) == std::vector<int>{2,3}, "");
}

void test_2()
{
	std::vector<int> nums {1,1,2};
    Solution sol;
    assert_that(sol.findDuplicates(nums) == std::vector<int>{1}, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    // run_test(test_3, "test_3");

    return 0;
}
