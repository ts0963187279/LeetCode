class Solution {
public :
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
		ListNode* solution = new ListNode(0);
		ListNode* point = solution;
		int carry = 0,a,b;
		a = l1->val;
		b = l2->val;
		while(true){
			point->val = (a + b + carry) % 10;
			carry = (a + b + carry) / 10;
			if(l1->next == NULL && l2->next == NULL && carry == 0){
				return solution;
			}
			point->next = new ListNode(0);
			point = point->next;
			if(l1->next == NULL)
				a = 0;
			else{
				l1 = l1->next;
				a = l1->val;
			}
			if(l2->next == NULL)
				b = 0;
			else{
				l2 = l2->next;
				b = l2->val;
			}
		}
	}
};
