class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode *head = new ListNode(0);
		ListNode *temp = head;
		while (l1 && l2) {
			if (l1->val < l2->val) {
				temp->next = l1;
				l1 = l1->next;
			} else {
				temp->next = l2;
				l2 = l2->next;
			}
			temp = temp->next;
		}
		if (l1 != NULL)
			temp->next = l1;
		if (l2 != NULL)
			temp->next = l2;
		return head->next;
	}
};
