#include "solution.h"
#include "test.h"

void test_1()
{
	Node n1(1);
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);
	Node n6(6);
	
	n1.children.push_back(&n3);
	n1.children.push_back(&n2);
	n1.children.push_back(&n4);
	
	n3.children.push_back(&n5);
	n3.children.push_back(&n6);
	
    Solution sol;
    assert_that(sol.preorder(&n1) == std::vector<int>{1,3,5,6,2,4}, "");
}



int main()
{
    run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");
    // run_test(test_4, "test_4");

    return 0;
}
