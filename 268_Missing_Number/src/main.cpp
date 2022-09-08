#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> data{0, 1, 2, 4};
    Solution sol;
    assert_that(sol.missingNumber(data) == 3, "");
}

void test_2()
{
    std::vector<int> data{3,0,1};
    Solution sol;
    assert_that(sol.missingNumber(data) == 2, "");
}

void test_3()
{
    std::vector<int> data{0,1};
    Solution sol;
    assert_that(sol.missingNumber(data) == 2, "");
}

void test_4()
{
    std::vector<int> data{9,6,4,2,3,5,7,0,1};
    Solution sol;
    assert_that(sol.missingNumber(data) == 8, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
