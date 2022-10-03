
#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.isPalindrome("A man, a plan, a canal: Panama") == true, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.isPalindrome("race a car") == false, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.isPalindrome(" ") == true, "");
}

void test_4()
{
    Solution sol;
    assert_that(sol.isPalindrome("0P") == false, "");
}


int main()
{
	run_test(test_1, "test_1");
	run_test(test_2, "test_2");
	run_test(test_3, "test_3");
	run_test(test_4, "test_4");
	// run_test(test_5, "test_5");

    return 0;
}
