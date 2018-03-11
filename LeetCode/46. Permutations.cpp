class Solution {
public:
	vector<vector<int> > permute(vector<int>& nums) {
		vector<vector<int> > result;
		vector<int> temp;
		int step = 0;
		bool *status = new bool[nums.size()];
		memset(status, 0, nums.size());
		getpermute(result, status, temp, step, nums);
		return result;
	}

	void getpermute(vector<vector<int> > &result, bool* status,
			vector<int> &temp, int step, vector<int>& nums) {
		if (step == (signed) nums.size()) {
			result.push_back(temp);
			return;
		}
		for (int i = 0; i < (signed) nums.size(); i++) {
			if (!status[i]) {
				temp.push_back(nums[i]);
				status[i] = true;
				getpermute(result, status, temp, step + 1, nums);
				temp.pop_back();
				status[i] = false;
			}
		}
	}
};
