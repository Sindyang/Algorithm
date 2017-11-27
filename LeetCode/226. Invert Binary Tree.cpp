class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root == NULL)
			return NULL;
		TreeNode * newroot = new TreeNode(root->val);
		newroot->left = invertTree(root->right);
		newroot->right = invertTree(root->left);
		return newroot;
	}
};
