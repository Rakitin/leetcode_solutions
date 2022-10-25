#include "solution.h"
#include "test.h"

void test_1()
{
    Solution sol;
    assert_that(sol.isIsomorphic("egg", "add") == true, "");
}

void test_2()
{
    Solution sol;
    assert_that(sol.isIsomorphic("foo", "bar") == false, "");
}

void test_3()
{
    Solution sol;
    assert_that(sol.isIsomorphic("paper", "title") == true, "");
}


void test_4()
{
    Solution sol;
    assert_that(sol.isIsomorphic("badc", "baba") == false, "");
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
