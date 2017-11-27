/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	int findBottomLeftValue(TreeNode* root) {
		if (root == NULL)
			return 0;

		queue<TreeNode *> q;
		q.push(root);
		int res = 0;
		while (!q.empty()) {
			res = q.front()->val;
			for (int i = 0, n = q.size(); i < n; i++) {
				TreeNode *t = q.front();
				q.pop();

				if (t->left != NULL) {
					q.push(t->left);
				}

				if (t->right != NULL) {
					q.push(t->right);
				}
			}
		}
		return res;
	}
};
