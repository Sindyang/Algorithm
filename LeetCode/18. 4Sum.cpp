class Solution {
public:
	vector<vector<int> > fourSum(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		vector<vector<int> > results;
		for (int i = 0; i < (signed) nums.size() - 3; i++) {
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			for (int j = i + 1; j < (signed) nums.size() - 2; j++) {
				if (j > i + 1 && nums[j] == nums[j - 1])
					continue;

				int l = j + 1;
				int r = nums.size() - 1;

				if (nums[i] + nums[j] + nums[l] + nums[l + 1] > target)
					continue;
				if (nums[i] + nums[j] + nums[r] + nums[r - 1] < target)
					continue;
				while (l < r) {
					if (nums[l] + nums[r] + nums[i] + nums[j] < target)
						l++;
					else if (nums[l] + nums[r] + nums[i] + nums[j] > target)
						r--;
					else {
						vector<int> result;
						result.push_back(nums[i]);
						result.push_back(nums[j]);
						result.push_back(nums[l]);
						result.push_back(nums[r]);
						results.push_back(result);
						while (l < r && nums[l] == nums[l + 1])
							l++;
						while (l < r && nums[r] == nums[r - 1])
							r--;
						l++;
						r--;
					}
				}
			}
		}
		return results;
	}
};18. 4Sum
