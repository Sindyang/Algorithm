class Solution {
public:
	void deleteNode(ListNode* node) {
		if (!node || !node->next) {
			return;
		}
		ListNode *nextNode = node->next;
		node->val = node->next->val;
		node->next = node->next->next;
	}
};
