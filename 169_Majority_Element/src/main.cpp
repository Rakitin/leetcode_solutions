#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> nums {3,2,3};
    Solution sol;
    assert_that(sol.majorityElement(nums) == 3, "");
}

void test_2()
{
	std::vector<int> nums {2,2,1,1,1,2,2};
    Solution sol;
    assert_that(sol.majorityElement(nums) == 2, "");
}

void test_3()
{
	std::vector<int> nums {2,2,1,1,1,2,2,1,1};
    Solution sol;
    assert_that(sol.majorityElement(nums) == 1, "");
}

void test_4()
{
	std::vector<int> nums {1};
	Solution sol;
	assert_that(sol.majorityElement(nums) == 1, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
