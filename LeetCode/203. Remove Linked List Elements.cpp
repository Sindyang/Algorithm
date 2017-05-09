class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		if (head == NULL) {
			return NULL;
		}
		while (head->val == val) {
			head = head->next;
			if (head == NULL) {
				return NULL;
			}
		}
		ListNode *pre = head;
		ListNode *cur = head->next;
		while (cur != NULL) {
			if (cur->val == val) {
				pre->next = cur->next;
				cur = cur->next;
			} else {
				pre = pre->next;
				cur = cur->next;
			}
		}
		return head;
	}
};
