class Solution {
public:
	bool isPalindrome(ListNode* head) {
		if (head == NULL || head->next == NULL) {
			return true;
		}
		stack<int> s;
		int len = 0;
		ListNode *cur = head;
		while (cur != NULL) {
			len++;
			cur = cur->next;
		}
		cur = head;
		int temp_len = len;
		len = len / 2;
		while (len) {
			s.push(cur->val);
			cur = cur->next;
			len--;
		}
		if (temp_len % 2) {
			s.push(cur->val);
		}

		while (cur != NULL) {
			if (s.top() == cur->val) {
				s.pop();
				cur = cur->next;
			} else {
				return false;
			}
		}
		return true;
	}
};
