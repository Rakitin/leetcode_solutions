#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.isSameAfterReversals(526) == true, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.isSameAfterReversals(1800) == false, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.isSameAfterReversals(0) == true, "");
}



int main()
{
	run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    // run_test(test_4, "test_4");

    return 0;
}
