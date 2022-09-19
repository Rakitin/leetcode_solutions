#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> prices {7,1,5,3,6,4};
    Solution sol;
    assert_that(sol.maxProfit(prices) == 5, "");
}

void test_2()
{
    std::vector<int> prices {7,6,4,3,1};
    Solution sol;
    assert_that(sol.maxProfit(prices) == 0, "");
}

void test_4()
{
    std::vector<int> prices {2,4,1};
    Solution sol;
    assert_that(sol.maxProfit(prices) == 2, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
