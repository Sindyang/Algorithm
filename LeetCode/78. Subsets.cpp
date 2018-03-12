class Solution {
public:
	vector<vector<int> > subsets(vector<int>& nums) {
		vector<vector<int> > result;
		bool *visited = new bool[nums.size()];
		memset(visited, 0, nums.size());
		vector<int> temp;
		int step = 0;
		getsubsets(result, temp, step, visited, nums, 0);
		delete visited;
		return result;
	}

	void getsubsets(vector<vector<int> > &result, vector<int> &temp, int step,
			bool *visited, vector<int>& nums, int start) {
		if (step == (signed) nums.size()) {
			result.push_back(temp);
			return;
		}

		for (int i = start; i < (signed) nums.size(); i++) {
			if (!visited[i]) {
				temp.push_back(nums[i]);
				visited[i] = true;
				getsubsets(result, temp, step + 1, visited, nums, start + 1);
				temp.pop_back();
				getsubsets(result, temp, step + 1, visited, nums, start + 1);
				visited[i] = false;
			}
		}
	}
};
