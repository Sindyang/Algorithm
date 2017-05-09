class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == NULL || headB == NULL) {
			return NULL;
		}
		int i;
		int lenA = 1;
		int lenB = 1;
		ListNode *tempA = headA;
		while (tempA->next != NULL) {
			tempA = tempA->next;
			lenA++;
		}
		ListNode *tempB = headB;
		while (tempB->next != NULL) {
			tempB = tempB->next;
			lenB++;
		}
		if (tempA != tempB) {
			return NULL;
		}
		if (lenA > lenB) {
			for (i = 0; i < lenA - lenB; i++) {
				headA = headA->next;
			}
		} else if (lenA < lenB) {
			for (i = 0; i < lenB - lenA; i++) {
				headB = headB->next;
			}
		}
		while (headA != headB) {
			headA = headA->next;
			headB = headB->next;
		}
		return headA;
	}
};
