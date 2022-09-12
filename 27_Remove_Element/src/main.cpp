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
    std::vector<int> nums {3,2,2,3};
    Solution sol;
    int c = sol.removeElement(nums, 3);
    std::vector<int> data {2,2};
    assert_that(check(nums, c, data) == true, "");
}

void test_2()
{
    std::vector<int> nums {0,1,2,2,3,0,4,2};
    Solution sol;
    int c = sol.removeElement(nums, 2);
    std::vector<int> data {0,1,4,0,3};
    assert_that(check(nums, c, data) == true, "");
}

void test_3()
{
    std::vector<int> nums {1};
    Solution sol;
    int c = sol.removeElement(nums, 1);
    std::vector<int> data {};
    assert_that(check(nums, c, data) == true, "");
}

void test_4()
{
    std::vector<int> nums {4,5};
    Solution sol;
    int c = sol.removeElement(nums, 5);
    std::vector<int> data {4};
    assert_that(check(nums, c, data) == true, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
