#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> digits {1,2,3};
    Solution sol;
    assert_that(sol.plusOne(digits) == std::vector<int>{1,2,4}, "");
}

void test_2()
{
    std::vector<int> digits {4,3,2,1};
    Solution sol;
    assert_that(sol.plusOne(digits) == std::vector<int>{4,3,2,2}, "");
}

void test_3()
{
    std::vector<int> digits {9};
    Solution sol;
    assert_that(sol.plusOne(digits) == std::vector<int>{1,0}, "");
}

void test_4()
{
    std::vector<int> digits {1,9,9};
    Solution sol;
    assert_that(sol.plusOne(digits) == std::vector<int>{2,0,0}, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_3");

    return 0;
}
