class Solution {
public:
	ListNode* oddEvenList(ListNode* head) {
		if (head == NULL) {
			return NULL;
		}
		ListNode *odd = head;
		ListNode *even = head->next;
		ListNode *temp = even;
		while (even && even->next) {
			odd->next = even->next;
			odd = even->next;
			even->next = odd->next;
			even = odd->next;
		}
		odd->next = temp;
		return head;
	}
};
