#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<int> arr{1,0,2,3,0,4,5,0};
    Solution sol;
	sol.duplicateZeros(arr);
    assert_that(arr == std::vector<int>{1,0,0,2,3,0,0,4}, "");
}

void test_2()
{
	std::vector<int> arr{1,2,3};
    Solution sol;
	sol.duplicateZeros(arr);
    assert_that(arr == std::vector<int>{1,2,3}, "");
}


int main()
{
	run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    // run_test(test_3, "test_3");
    // run_test(test_4, "test_4");

    return 0;
}
