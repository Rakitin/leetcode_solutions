#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.lengthOfLongestSubstring("abcabcbb") == 3, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.lengthOfLongestSubstring("bbbbb") == 1, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.lengthOfLongestSubstring("pwwkew") == 3, "");
}

void test_4()
{
    Solution sol;
    assert_that(sol.lengthOfLongestSubstring(" ") == 1, "");
}

void test_5()
{
    Solution sol;
    assert_that(sol.lengthOfLongestSubstring("dvdf") == 3, "");
}

void test_6()
{
    Solution sol;
    assert_that(sol.lengthOfLongestSubstring("ynyo") == 3, "");
}

void test_7()
{
    Solution sol;
    assert_that(sol.lengthOfLongestSubstring("abba") == 2, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
    run_test(test_5, "test_5");
    run_test(test_6, "test_6");
    run_test(test_7, "test_7");

    return 0;
}
