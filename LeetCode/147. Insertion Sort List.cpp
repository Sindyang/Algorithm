/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* insertionSortList(ListNode* head) {
		if (head == NULL || head->next == NULL)
			return head;
		ListNode *newhead = new ListNode(-1);
		newhead->next = head;
		ListNode *cur = head;
		ListNode *nextnode = head->next;
		while (nextnode != NULL) {
			if (cur->val <= nextnode->val) {
				nextnode = nextnode->next;
				cur = cur->next;
			} else {
				ListNode *temp = nextnode;
				cur->next = nextnode->next;
				nextnode = nextnode->next;

				ListNode *pre = newhead;
				ListNode *insert = newhead->next;
				while (insert->val <= temp->val) {
					pre = insert;
					insert = insert->next;
				}
				pre->next = temp;
				temp->next = insert;
			}
		}
		return newhead->next;
	}
};
