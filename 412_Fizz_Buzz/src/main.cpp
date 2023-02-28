#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
	Solution sol;
	assert_that(sol.fizzBuzz(3) == std::vector<std::string> {"1","2","Fizz"}, "");
}

void test_2()
{
	Solution sol;
	assert_that(sol.fizzBuzz(5) == std::vector<std::string> {"1","2","Fizz","4","Buzz"}, "");
}

void test_3()
{
	Solution sol;
	assert_that(sol.fizzBuzz(15) == std::vector<std::string> {"1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"}, "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");

	return 0;
}
