#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<std::string> words {
		"i","love","leetcode","i","love","coding"
	};
    Solution sol;
    assert_that(sol.topKFrequent(words, 2) == std::vector<std::string>{"i","love"}, "");
}




int main()
{
	run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");
    // run_test(test_4, "test_4");

    return 0;
}
