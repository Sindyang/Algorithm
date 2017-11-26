/*
 * main.cpp
 *
 *  Created on: 2017年11月26日
 *      Author: wangsy
 */
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
void PreorderTraversal(TreeNode *root);
class Solution {
public:
	TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
		if (nums.empty())
			return NULL;
		return construct(nums, 0, nums.size() - 1);
	}

	TreeNode* construct(vector<int>& nums, int low, int high) {
		if (low > high)
			return NULL;
		int pivot = maxindex(nums, low, high);
		TreeNode *root = new TreeNode(nums[pivot]);
		root->left = construct(nums, low, pivot - 1);
		root->right = construct(nums, pivot + 1, high);
		return root;
	}

	int maxindex(vector<int> & nums, int begin, int end) {
		int max = nums[begin];
		int index = begin;
		for (int i = begin + 1; i <= end; i++) {
			if (max < nums[i]) {
				max = nums[i];
				index = i;
			}
		}
		return index;
	}
};
int main() {
	vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	v.push_back(6);
	v.push_back(0);
	v.push_back(5);
	Solution Sol;
	TreeNode *root = Sol.constructMaximumBinaryTree(v);
	PreorderTraversal(root);
	return 0;
}

void PreorderTraversal(TreeNode *root) {
	cout << root->val << "  ";
	if (root->left != NULL)
		PreorderTraversal(root->left);
	if (root->right != NULL)
		PreorderTraversal(root->right);
}
