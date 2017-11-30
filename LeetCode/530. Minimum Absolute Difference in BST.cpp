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
	int getMinimumDifference(TreeNode* root) {
		vector<int> v;
		getnum(root, v);
		int min = v[v.size() - 1];
		for (int i = 1; i < (signed) v.size(); i++) {
			if (min > v[i] - v[i - 1])
				min = v[i] - v[i - 1];
		}
		return min;
	}

	void getnum(TreeNode *root, vector<int> &v) {
		if (root->left != NULL)
			getnum(root->left, v);
		v.push_back(root->val);
		if (root->right != NULL)
			getnum(root->right, v);
	}
};
