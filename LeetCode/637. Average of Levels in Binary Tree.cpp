/*
 * main.cpp
 *
 *  Created on: 2017年9月26日
 *      Author: wangsy
 */
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
	vector<double> averageOfLevels(TreeNode* root) {
		queue<TreeNode*> nodes;
		vector<double> result;
		nodes.push(root);
		while (!nodes.empty()) {
			int num = nodes.size();
			double sum = 0;
			for (int i = 0; i < num; i++) {
				TreeNode* node = nodes.front();
				nodes.pop();
				sum += node->val;
				if (node->left != NULL)
					nodes.push(node->left);
				if (node->right != NULL)
					nodes.push(node->right);
			}
			//cout << sum << " " << num << endl;
			if (num != 0) {
				double temp = sum / num;
				//cout << temp << endl;
				result.push_back(temp);
			}

		}
		return result;
	}
};
