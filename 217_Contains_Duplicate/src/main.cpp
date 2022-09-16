#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
   std::vector<int> nums {1,2,3,1};
    Solution sol;
    assert_that(sol.containsDuplicate(nums) == true, "");
}

void test_2()
{
   std::vector<int> nums {1,2,3,4};
    Solution sol;
    assert_that(sol.containsDuplicate(nums) == false, "");
}

void test_3()
{
   std::vector<int> nums {1,1,1,3,3,4,3,2,4,2};
    Solution sol;
    assert_that(sol.containsDuplicate(nums) == true, "");
}

void test_4()
{
   std::vector<int> nums {};
    Solution sol;
    assert_that(sol.containsDuplicate(nums) == false, "");
}



int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
