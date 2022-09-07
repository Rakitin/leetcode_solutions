#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.romanToInt("III") == 3, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.romanToInt("LVIII") == 58, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.romanToInt("MCMXCIV") == 1994, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");

    return 0;
}
