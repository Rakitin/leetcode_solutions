#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> nums {2,2,1};
    Solution sol;
    assert_that(sol.singleNumber(nums) == 1, "");
}

void test_2()
{
    std::vector<int> nums {4,1,2,1,2};
    Solution sol;
    assert_that(sol.singleNumber(nums) == 4, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");

    return 0;
}
