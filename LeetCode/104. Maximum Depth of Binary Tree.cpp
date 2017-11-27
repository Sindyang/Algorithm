//非递归
class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
			return 0;

		queue<TreeNode *> q;
		q.push(root);
		int res = 0;
		while (!q.empty()) {
			res += 1;
			for (int i = 0, n = q.size(); i < n; i++) {
				TreeNode *t = q.front();
				q.pop();
				if (t->left != NULL)
					q.push(t->left);
				if (t->right != NULL)
					q.push(t->right);
			}
		}
		return res;
	}
};

//递归
class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
			return 0;

		int l = maxDepth(root->left);
		int r = maxDepth(root->right);

		return l > r ? l + 1 : r + 1;
	}
};
