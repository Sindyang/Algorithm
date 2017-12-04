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
	vector<int> findFrequentTreeSum(TreeNode* root) {
		vector<int> result;
		map<int, int> m;
		int max = 0;
		findtreesum(root, m, result, max);
		return result;
	}

	int findtreesum(TreeNode *root, map<int, int>&m, vector<int> &v, int &max) {
		if (root == NULL)
			return 0;
		int lsum = findtreesum(root->left, m, v, max);
		int rsum = findtreesum(root->right, m, v, max);
		int sum = lsum + rsum + root->val;
		m[sum] += 1;
		if (m[sum] >= max) {
			if (m[sum] > max)
				v.clear();
			v.push_back(sum);
			max = m[sum];
		}
		return sum;
	}
};
