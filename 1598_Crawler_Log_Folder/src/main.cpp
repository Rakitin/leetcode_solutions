#include "solution.h"
#include "test.h"

void test_1()
{
	std::vector<std::string> logs {
		"d1/","d2/","../","d21/","./"
	};
    Solution sol;
    assert_that(sol.minOperations(logs) == 2, "");
}

void test_2()
{
	std::vector<std::string> logs {
		"d1/","d2/","./","d3/","../","d31/"
	};
    Solution sol;
    assert_that(sol.minOperations(logs) == 3, "");
}


void test_3()
{
	std::vector<std::string> logs {
		"d1/","../","../","../"
	};
    Solution sol;
    assert_that(sol.minOperations(logs) == 0, "");
}

void test_4()
{
	std::vector<std::string> logs {
		"d1/","../","../","../","d1/"
	};
    Solution sol;
    assert_that(sol.minOperations(logs) == 1, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
