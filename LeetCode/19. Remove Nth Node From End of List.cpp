class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *newhead = new ListNode(-1);
		newhead->next = head;
		ListNode *front = head;
		ListNode *end = head;
		ListNode *prev = newhead;
		int count = 0;
		while (end != NULL) {
			end = end->next;
			count++;
			if (count > n) {
				prev = prev->next;
				front = front->next;
			}
		}
		prev->next = front->next;
		return newhead->next;
	}
};
