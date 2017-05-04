//solution 1
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode *newHead = NULL;
		while (head) {
			ListNode *nextNode = head->next;
			head->next = newHead;
			newHead = head;
			head = nextNode;
		}
		return newHead;
	}
};
