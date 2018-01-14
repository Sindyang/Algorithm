/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//递归
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

//循环
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;
		if (root == NULL)
			return result;

		stack<TreeNode*> s;
		s.push(root);

		while (!s.empty()) {
			TreeNode *temp = s.top();
			s.pop();
			result.push_back(temp->val);
			if (temp->right != NULL)
				s.push(temp->right);
			if (temp->left != NULL)
				s.push(temp->left);

		}
		return result;
	}

};
