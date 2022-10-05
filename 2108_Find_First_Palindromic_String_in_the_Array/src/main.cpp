#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<std::string> words {
		"abc","car","ada","racecar","cool"
	};
    Solution sol;
    assert_that(sol.firstPalindrome(words) == "ada", "");
}

void test_2()
{
	std::vector<std::string> words {
		"notapalindrome","racecar"
	};
    Solution sol;
    assert_that(sol.firstPalindrome(words) == "racecar", "");
}

void test_3()
{
	std::vector<std::string> words {
		"def","ghi"
	};
    Solution sol;
    assert_that(sol.firstPalindrome(words) == "", "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");

    return 0;
}
