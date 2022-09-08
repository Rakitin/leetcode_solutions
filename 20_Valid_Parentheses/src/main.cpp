#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.isValid("()") == true, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.isValid("()[]{}") == true, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.isValid("(]") == false, "");
}

void test_4()
{
    Solution sol;
    assert_that(sol.isValid(")(") == false, "");
}

void test_5()
{
    Solution sol;
    assert_that(sol.isValid("([)]") == false, "");
}

void test_6()
{
    Solution sol;
    assert_that(sol.isValid("[") == false, "");
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
