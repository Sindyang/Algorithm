class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == NULL) {
			return NULL;
		}
		ListNode *pre = head;
		ListNode *cur = head->next;
		int preval;
		int curval;
		while (cur) {
			preval = pre->val;
			curval = cur->val;
			if (preval == curval) {
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
