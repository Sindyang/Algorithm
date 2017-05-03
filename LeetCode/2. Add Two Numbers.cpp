class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *res = new ListNode(0);
		ListNode *cur = res;
		int num1 = 0;
		int num2 = 0;
		int sum = 0;
		int carry = 0;
		while ((l1 != NULL) || (l2 != NULL)) {
			num1 = num2 = 0;
			if (l1 != NULL) {
				num1 = l1->val;
				l1 = l1->next;
			}
			if (l2 != NULL) {
				num2 = l2->val;
				l2 = l2->next;
			}
			sum = num1 + num2 + carry;
			ListNode *nextNode = new ListNode(sum % 10);
			cur->next = nextNode;
			cur = nextNode;
			carry = sum / 10;
		}
		if (carry) {
			ListNode *nextNode = new ListNode(carry);
			cur->next = nextNode;
			nextNode->next = NULL;
		} else {
			cur->next = NULL;
		}
		return res->next;
	}
};
