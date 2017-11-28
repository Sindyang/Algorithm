class Solution {
public:
	bool findTarget(TreeNode* root, int k) {
		queue<TreeNode *> q;
		q.push(root);
		bool flag = false;
		while (!q.empty()) {
			if (flag)
				break;
			for (int i = 0, n = q.size(); i < n; i++) {
				TreeNode *temp = q.front();
				flag = IsCorrect(root, temp, k - temp->val);
				if (flag)
					break;
				q.pop();
				if (temp->left != NULL)
					q.push(temp->left);
				if (temp->right != NULL)
					q.push(temp->right);
			}
		}
		return flag;
	}

	bool IsCorrect(TreeNode *root, TreeNode* current, int target) {
		bool result = false;
		if (root == NULL)
			return false;
		if (root->val < target)
			result = IsCorrect(root->right, current, target);
		else if (root->val > target)
			result = IsCorrect(root->left, current, target);
		else if (root->val == target) {
			if (root == current)
				return false;
			else
				return true;
		}
		return result;
	}
};
