#include <iostream>
#include "solution.h"
#include "test.h"


bool check(const std::vector<int> &nums, int c, const std::vector<int> &data)
{
    if (c != data.size()) {
        return false;
    }
    for (uint i = 0; i < data.size(); ++i) {
        if (nums[i] != data[i]) {
            return false;
        }
    }
    return true;
}


void test_1()
{
    std::vector<int> nums {1,1,2};
    Solution sol;
    int c = sol.removeDuplicates(nums);
    std::vector<int> data {1,2};
    assert_that(check(nums, c, data) == true, "");
}

void test_2()
{
    std::vector<int> nums {0,0,1,1,1,2,2,3,3,4};
    Solution sol;
    int c = sol.removeDuplicates(nums);
    std::vector<int> data {0,1,2,3,4};
    assert_that(check(nums, c, data) == true, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");

    return 0;
}
