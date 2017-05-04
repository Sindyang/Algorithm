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

//solution 2
class Solution {
public:
	ListNode* reverseList(ListNode *head) {
		return reverseListIter(head, NULL);
	}
	ListNode *reverseListIter(ListNode *head, ListNode *newhead) {
		if (head == NULL) {
			return newhead;
		}
		ListNode *nextNode = head->next;
		head->next = newhead;
		return reverseListIter(nextNode, head);
	}
};
