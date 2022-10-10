#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.multiply("2", "3") == "6", "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.multiply("123", "456") == "56088", "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.multiply("5", "5") == "25", "");
}

void test_4()
{
    Solution sol;
    assert_that(sol.multiply("9133", "0") == "0", "");
}


int main()
{
    // run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
