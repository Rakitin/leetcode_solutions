#include "solution.h"
#include "test.h"

bool check(Node *root1, Node *root2)
{
	while (root1 and root2) {
		if (root1->val != root2->val or 
			(root1->random ? root1->random->val : 0) != (root2->random ? root2->random->val : 0)
			) {
				return false;
			}
			
		root1 = root1->next;
		root2 = root2->next;
	}
	return !root1 and !root2;
}

void test_1()
{
	Node n1(7);
	Node n2(13);
	Node n3(11);
	Node n4(10);
	Node n5(1);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	n1.random = nullptr;
	n2.random = &n1;
	n3.random = &n5;
	n4.random = &n3;
	n5.random = &n1;
	
    Solution sol;
	Node *r = sol.copyRandomList(&n1);
    assert_that(check(&n1, r) == true, "");
}



int main()
{
    run_test(test_1, "test_1");
    // run_test(test_2, "test_2");
    // run_test(test_3, "test_3");

    return 0;
}
