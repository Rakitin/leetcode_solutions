#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> nums {1,3,5,6};
    Solution sol;
    assert_that(sol.searchInsert(nums, 5) == 2, "");
}

void test_2()
{
    std::vector<int> nums {1,3,5,6};
    Solution sol;
    assert_that(sol.searchInsert(nums, 2) == 1, "");
}

void test_3()
{
    std::vector<int> nums {1,3,5,6};
    Solution sol;
    assert_that(sol.searchInsert(nums, 7) == 4, "");
}

void test_4()
{
    std::vector<int> nums {1,3,5,6};
    Solution sol;
    assert_that(sol.searchInsert(nums, 0) == 0, "");
}

void test_5()
{
    std::vector<int> nums {1,3};
    Solution sol;
    assert_that(sol.searchInsert(nums, 0) == 0, "");
}

void test_6()
{
    std::vector<int> nums {1,3};
    Solution sol;
    assert_that(sol.searchInsert(nums, 2) == 1, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
    run_test(test_5, "test_5");
    run_test(test_6, "test_6");

    return 0;
}
