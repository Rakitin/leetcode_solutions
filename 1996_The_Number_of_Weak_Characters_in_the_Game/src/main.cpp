#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<std::vector<int>> properties{{5, 5}, {6, 3}, {3, 6}};
    Solution sol;
    assert_that(sol.numberOfWeakCharacters(properties) == 0, "");
}

void test_2()
{
    std::vector<std::vector<int>> properties{{2, 2}, {3, 3}};
    Solution sol;
    assert_that(sol.numberOfWeakCharacters(properties) == 1, "");
}

void test_3()
{
    std::vector<std::vector<int>> properties{{1, 5}, {10, 4}, {4, 3}};
    Solution sol;
    assert_that(sol.numberOfWeakCharacters(properties) == 1, "");
}

void test_4()
{
    std::vector<std::vector<int>> properties{
        {7,7}, {1,2}, {9,7}, {7,3}, {3,10}, {9,8}, {8,10}, {4,3}, {1,5}, {1,5}
    };
    Solution sol;
    assert_that(sol.numberOfWeakCharacters(properties) == 6, "");
}

void test_5()
{
    std::vector<std::vector<int>> properties{
        {10,1},{5,1},{7,10},{4,1},{5,9},{6,9},{7,2},{1,10}
    };
    Solution sol;
    assert_that(sol.numberOfWeakCharacters(properties) == 4, "");
}

void test_6()
{
    std::vector<std::vector<int>> properties{
        {7,9},{10,7},{6,9},{10,4},{7,5},{7,10}
    };
    Solution sol;
    assert_that(sol.numberOfWeakCharacters(properties) == 2, "");
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
