#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.intToRoman(58) == "LVIII", "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.intToRoman(1994) == "MCMXCIV", "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.intToRoman(3) == "III", "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");

    return 0;
}
