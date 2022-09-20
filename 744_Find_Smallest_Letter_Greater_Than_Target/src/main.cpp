#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<char> letters {'c','f','j'};
    Solution sol;
    assert_that(sol.nextGreatestLetter(letters, 'a') == 'c', "");
}

void test_2()
{
    std::vector<char> letters {'c','f','j'};
    Solution sol;
    assert_that(sol.nextGreatestLetter(letters, 'c') == 'f', "");
}

void test_3()
{
    std::vector<char> letters {'c','f','j'};
    Solution sol;
    assert_that(sol.nextGreatestLetter(letters, 'd') == 'f', "");
}

void test_4()
{
    std::vector<char> letters {'a','b'};
    Solution sol;
    assert_that(sol.nextGreatestLetter(letters, 'z') == 'a', "");
}

void test_5()
{
    std::vector<char> letters {'c','f','j'};
    Solution sol;
    assert_that(sol.nextGreatestLetter(letters, 'j') == 'c', "");
}



int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");
    run_test(test_5, "test_5");

    return 0;
}
