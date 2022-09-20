#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> nums{-1,0,3,5,9,12};
    Solution sol;
    assert_that(sol.search(nums, 9) == 4, "");
}

void test_2()
{
    std::vector<int> nums{-1,0,3,5,9,12};
    Solution sol;
    assert_that(sol.search(nums, 2) == -1, "");
}

void test_3()
{
    std::vector<int> nums{5};
    Solution sol;
    assert_that(sol.search(nums, 5) == 0, "");
}



int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");

    return 0;
}
