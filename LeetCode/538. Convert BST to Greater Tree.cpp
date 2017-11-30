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
	TreeNode* convertBST(TreeNode* root) {
		int sum = 0;
		convert(root, sum);
		return root;
	}

	void convert(TreeNode *root, int &sum) {
		if (root == NULL)
			return;
		if (root->right != NULL)
			convert(root->right, sum);

		root->val += sum;
		sum = root->val;

		if (root->left != NULL)
			convert(root->left, sum);
	}

};
