#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.reverse(123) == 321, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.reverse(-123) == -321, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.reverse(120) == 21, "");
}

void test_4()
{
    Solution sol;
    assert_that(sol.reverse(-120) == -21, "");
}

void test_5()
{
    Solution sol;
    assert_that(sol.reverse(1999999999) == 0, "");
}



int main()
{
	run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
    run_test(test_5, "test_5");

    return 0;
}
