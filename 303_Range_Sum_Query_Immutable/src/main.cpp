#include "solution.h"
#include "test.h"

void test_1()
{
	auto vec = std::vector<int>{-2, 0, 3, -5, 2, -1};
	auto sol = NumArray(vec);
	assert_that(sol.sumRange(0, 2) == 1, "");
	assert_that(sol.sumRange(2, 5) == -1, "");
	assert_that(sol.sumRange(0, 5) == -3, "");
}



int main()
{
	run_test(test_1, "test_1");
	// run_test(test_2, "test_2");
	// run_test(test_3, "test_3");
	// run_test(test_4, "test_4");

    return 0;
}
