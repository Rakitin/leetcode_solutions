#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> nums {1,3,4,2,2};
    Solution sol;
    assert_that(sol.findDuplicate(nums) == 2, "");
}

void test_2()
{
	std::vector<int> nums {3,1,3,4,2};
    Solution sol;
    assert_that(sol.findDuplicate(nums) == 3, "");
}

void test_3()
{
	std::vector<int> nums {1,1};
	Solution sol;
	assert_that(sol.findDuplicate(nums) == 1, "");
}

void test_4()
{
	std::vector<int> nums {2,2,2,2,2};
	Solution sol;
	assert_that(sol.findDuplicate(nums) == 2, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
	run_test(test_4, "test_4");

    return 0;
}
