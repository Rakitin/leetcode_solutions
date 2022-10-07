#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.myAtoi("42") == 42, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.myAtoi("   -42") == -42, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.myAtoi("4193 with words") == 4193, "");
}

void test_4()
{
    Solution sol;
    assert_that(sol.myAtoi(" -04193 with words") == -4193, "");
}

void test_5()
{
    Solution sol;
    assert_that(sol.myAtoi("-91283472332") == -2147483648, "");
}

void test_6()
{
    Solution sol;
    assert_that(sol.myAtoi("+-12") == 0, "");
}

int main()
{
	run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
    run_test(test_5, "test_5");
    run_test(test_6, "test_6");

    return 0;
}
