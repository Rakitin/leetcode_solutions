#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> num {1,2,0,0};
	int k {34};
    Solution sol;
    assert_that(sol.addToArrayForm(num, k) == std::vector<int>{1,2,3,4}, "");
}

void test_2()
{
	std::vector<int> num {2,1,5};
	int k {806};
    Solution sol;
    assert_that(sol.addToArrayForm(num, k) == std::vector<int>{1,0,2,1}, "");
}

void test_3()
{
	std::vector<int> num {2,7,4};
	int k {181};
    Solution sol;
    assert_that(sol.addToArrayForm(num, k) == std::vector<int>{4,5,5}, "");
}

void test_4()
{
	std::vector<int> num {9,9,9,9,9,9,9,9,9,9};
	int k {1};
    Solution sol;
    assert_that(sol.addToArrayForm(num, k) == std::vector<int>{1,0,0,0,0,0,0,0,0,0,0}, "");
}

void test_5()
{
	std::vector<int> num {9,9,9};
	int k {1};
    Solution sol;
    assert_that(sol.addToArrayForm(num, k) == std::vector<int>{1,0,0,0}, "");
}

void test_6()
{
	std::vector<int> num {1};
	int k {999};
    Solution sol;
    assert_that(sol.addToArrayForm(num, k) == std::vector<int>{1,0,0,0}, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
	run_test(test_5, "test_5");
    run_test(test_6, "test_6");

    return 0;
}
