class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		stack<int> s1;
		stack<int> s2;
		stack<int> s;
		int num1;
		int num2;
		int sum = 0;
		int carry = 0;
		ListNode *res = new ListNode(0);
		ListNode *cur = res;
		while (l1 != NULL) {
			s1.push(l1->val);
			l1 = l1->next;
		}
		while (l2 != NULL) {
			s2.push(l2->val);
			l2 = l2->next;
		}
		while (!s1.empty() || !s2.empty()) {
			num1 = num2 = 0;
			if (!s1.empty()) {
				num1 = s1.top();
				s1.pop();
			}
			if (!s2.empty()) {
				num2 = s2.top();
				s2.pop();
			}
			sum = num1 + num2 + carry;
			s.push(sum % 10);
			carry = sum / 10;
		}
		if (carry) {
			s.push(carry);
		}
		while (!s.empty()) {
			ListNode *temp = new ListNode(s.top());
			cur->next = temp;
			cur = temp;
			s.pop();
		}
		return res->next;
	}
};
