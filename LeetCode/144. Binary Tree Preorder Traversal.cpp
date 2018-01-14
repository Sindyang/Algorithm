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
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;
		preorder(result, root);
		return result;
	}

	void preorder(vector<int>& result, TreeNode *root) {
		if (root == NULL)
			return;
		result.push_back(root->val);
		if (root->left != NULL)
			preorder(result, root->left);
		if (root->right != NULL)
			preorder(result, root->right);
	}
};
