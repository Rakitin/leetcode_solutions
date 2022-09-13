#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.lengthOfLastWord("Hello World") == 5, "");
}


void test_2()
{
    Solution sol;
    assert_that(sol.lengthOfLastWord("   fly me   to   the moon  ") == 4, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.lengthOfLastWord("luffy is still joyboy") == 6, "");
}

void test_4()
{
    Solution sol;
    assert_that(sol.lengthOfLastWord("Today is a nice day") == 3, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");

    return 0;
}
