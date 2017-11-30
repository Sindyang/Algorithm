class Solution {
public:
	int findTilt(TreeNode* root) {
		if (root == NULL)
			return 0;
		int leftsum = 0;
		int rightsum = 0;
		int leftdif = 0;
		int rightdif = 0;
		if (root->left != NULL) {
			leftdif = findTilt(root->left);
			leftsum = getchildsum(root->left);
		}
		if (root->right != NULL) {
			rightdif = findTilt(root->right);
			rightsum = getchildsum(root->right);
		}
		int dif = abs(leftsum - rightsum);
		return leftdif + rightdif + dif;
	}

	int getchildsum(TreeNode *root) {
		int sum = 0;
		if (root == NULL)
			return 0;
		if (root->left != NULL)
			sum += getchildsum(root->left);
		if (root->right != NULL)
			sum += getchildsum(root->right);
		return sum + root->val;
	}
};
