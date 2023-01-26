#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<char> s { 'h','e','l','l','o' };
	Solution sol;
	sol.reverseString(s);
	assert_that(s == std::vector<char>{ 'o','l','l','e','h' }, "");
}

void test_2()
{
	std::vector<char> s { 'H','a','n','n','a','h' };
	Solution sol;
	sol.reverseString(s);
	assert_that(s == std::vector<char>{ 'h','a','n','n','a','H' }, "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");

	return 0;
}
