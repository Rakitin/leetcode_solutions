#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
	Solution sol;
	assert_that(sol.decodeString("3[a]2[bc]") == "aaabcbc", "");
}

void test_2()
{
	Solution sol;
	assert_that(sol.decodeString("3[a2[c]]") == "accaccacc", "");
}

void test_3()
{
	std::string s;
	for (int i { 0 }; i < 100; ++i) {
		s += "leetcode";
	}
	Solution sol;
	std::string r = sol.decodeString("100[leetcode]");
	// std::cout << s.length() << " " << r.length() << std::endl;
	assert_that(r == s, "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");

	return 0;
}
