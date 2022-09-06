#include <iostream>
#include "solution.h"
#include "test.h"


void test_1()
{
    TreeNode n7(7);

    TreeNode n3(3);
    TreeNode n15(15);
    n7.left = &n3;
    n7.right = &n15;

    TreeNode n9(9);
    TreeNode n20(20);
    n15.left = &n9;
    n15.right = &n20;

    BSTIterator bSTIterator(&n7);
    assert_that(bSTIterator.next() == 3, "bSTIterator.next() == 3");
    assert_that(bSTIterator.next() == 7, "bSTIterator.next() == 7");
    assert_that(bSTIterator.hasNext() == true, "bSTIterator.hasNext() == true");
    assert_that(bSTIterator.next() == 9, "bSTIterator.next() == 9");
    assert_that(bSTIterator.hasNext() == true, "bSTIterator.hasNext() == true");
    assert_that(bSTIterator.next() == 15, "bSTIterator.next() == 15");
    assert_that(bSTIterator.hasNext() == true, "bSTIterator.hasNext() == true");
    assert_that(bSTIterator.next() == 20, "bSTIterator.next() == 20");
    assert_that(bSTIterator.hasNext() == false, "bSTIterator.hasNext() == false");
}

int main()
{
    run_test(test_1, "test_1");

    return 0;
}
