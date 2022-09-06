#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> nums{2, 7, 11, 15};
    int target{9};
    std::vector<int> r{0, 1};
    Solution sol;
    assert_that(sol.twoSum(nums, target) == r, "");
}

void test_2()
{
    std::vector<int> nums{3,2,4};
    int target{6};
    std::vector<int> r{1,2};
    Solution sol;
    assert_that(sol.twoSum(nums, target) == r, "");
}

void test_3()
{
    std::vector<int> nums{3,3};
    int target{6};
    std::vector<int> r{0,1};
    Solution sol;
    assert_that(sol.twoSum(nums, target) == r, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");

    return 0;
}
