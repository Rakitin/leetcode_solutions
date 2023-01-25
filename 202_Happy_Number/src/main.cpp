#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
	Solution sol;
	assert_that(sol.isHappy(19) == true, "");
}

void test_2()
{
	Solution sol;
	assert_that(sol.isHappy(2) == false, "");
}

void test_3()
{
	Solution sol;
	assert_that(sol.isHappy(7) == true, "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");

    return 0;
}
