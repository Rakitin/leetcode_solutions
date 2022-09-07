#include <iostream>
#include "solution.h"
#include "test.h"

#include <vector>
#include <string>

void test_1()
{
    std::vector<std::string> strs{"flower", "flow", "flight"};
    Solution sol;
    assert_that(sol.longestCommonPrefix(strs) == "fl", "");
}

void test_2()
{
    std::vector<std::string> strs{"dog", "racecar", "car"};
    Solution sol;
    assert_that(sol.longestCommonPrefix(strs) == "", "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");

    return 0;
}
