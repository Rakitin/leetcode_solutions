#include <iostream>
#include "solution.h"
#include "test.h"


//        TreeNode *n1 = new TreeNode(5, new TreeNode(3, new TreeNode(2), new TreeNode(4)), new TreeNode(7));


bool check(TreeNode *n) {
    if (!n) {
        return true;
    }
    if (n->left && n->left->val > n->val) {
        return false;
    }
    if (n->right && n->right->val < n->val) {
        return false;
    }
    return check(n->left) && check(n->right);
}


void test_1()
{
    std::vector<int> nums {-10,-3,0,5,9};

    Solution sol;
    TreeNode *n = sol.sortedArrayToBST(nums);
    assert_that(check(n) == true, "");
}

void test_2()
{
    std::vector<int> nums {};

    Solution sol;
    TreeNode *n = sol.sortedArrayToBST(nums);
    assert_that(check(n) == true, "");
}


int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    //    run_test(test_3, "test_3");
    //    run_test(test_4, "test_4");
    //    run_test(test_5, "test_5");
    //    run_test(test_6, "test_6");

    return 0;
}
