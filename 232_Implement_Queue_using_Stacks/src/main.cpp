#include "solution.h"
#include "test.h"

void test_1()
{
	MyQueue qu;
	qu.push(1);
	qu.push(2);
	assert_that(qu.peek() == 1, "");
	assert_that(qu.pop() == 1, "");
	assert_that(qu.empty() == false, "");
}


int main()
{
    run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");

    // run_test(test_4, "test_4");
    // run_test(test_5, "test_5");

    // run_test(test_6, "test_6");

    return 0;
}
