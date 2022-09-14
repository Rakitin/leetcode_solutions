#include <iostream>
#include "solution.h"
#include "solution2.h"
#include "test.h"

void test_1()
{
    std::vector<int> nums1 {1,2,3,0,0,0};
    int m {3};
    std::vector<int> nums2 {2,5,6};
    int n {3};
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    assert_that(nums1 == std::vector<int>{1,2,2,3,5,6}, "");
}

void test_12()
{
    std::vector<int> nums1 {1,2,3,0,0,0};
    int m {3};
    std::vector<int> nums2 {2,5,6};
    int n {3};
    Solution2 sol;
    sol.merge(nums1, m, nums2, n);
    assert_that(nums1 == std::vector<int>{1,2,2,3,5,6}, "");
}

void test_2()
{
    std::vector<int> nums1 {1};
    int m {1};
    std::vector<int> nums2 {};
    int n {0};
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    assert_that(nums1 == std::vector<int>{1}, "");
}

void test_3()
{
    std::vector<int> nums1 {0};
    int m {0};
    std::vector<int> nums2 {1};
    int n {1};
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    assert_that(nums1 == std::vector<int>{1}, "");
}

void test_4()
{
    std::vector<int> nums1 {2,0};
    int m {1};
    std::vector<int> nums2 {1};
    int n {1};
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    assert_that(nums1 == std::vector<int>{1,2}, "");
}


int main()
{
//    run_test(test_1, "test_1");
    run_test(test_12, "test_12");
//    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");
//    run_test(test_4, "test_4");

    return 0;
}
