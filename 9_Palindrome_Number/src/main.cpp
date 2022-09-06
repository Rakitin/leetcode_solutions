#include <iostream>
#include "solution.h"
#include "test.h"

void test_121()
{
    Solution sol;
    assert_that(sol.isPalindrome(121) == true, "121 is a palindrome");
}

void test_122()
{
    Solution sol;
    assert_that(sol.isPalindrome(122) == false, "122 isn't a palindrome");
}

void test_2()
{
    Solution sol;
    assert_that(sol.isPalindrome(2) == true, "2 is a palindrome");
}

void test_22()
{
    Solution sol;
    assert_that(sol.isPalindrome(22) == true, "22 is a palindrome");
}

int main()
{
    run_test(test_121, "test_121");
    run_test(test_122, "test_122");
    run_test(test_2, "test_2");
    run_test(test_22, "test_22");

    return 0;
}
