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
		int res = root->val;
		bool flag = true;
		while (!q.empty()) {
			for (int i = 0, n = q.size(); i < n; i++) {
				TreeNode *t = q.front();
				q.pop();

				if (t->left != NULL) {
					q.push(t->left);
					if (flag) {
						res = t->left->val;
						flag = false;
					}
				}

				if (t->right != NULL) {
					q.push(t->right);
					if (flag) {
						res = t->right->val;
						flag = false;
					}
				}

			}
			flag = true;
		}
		return res;
	}
};
