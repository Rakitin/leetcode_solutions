#include "solution.h"
#include "test.h"

void test_1()
{
	MyStack st;
	st.push(1);
	st.push(2);
	assert_that(st.top() == 2, "");
	assert_that(st.pop() == 2, "");
	assert_that(st.empty() == false, "");
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
