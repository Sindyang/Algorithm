class Solution {
public:
	vector<vector<int> > threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int> > results;
		for (int i = 0; i < (signed) nums.size() - 2; i++) {
			if (i > 0 && nums[i] == nums[i - 1])
				continue;

			int l = i + 1;
			int r = nums.size() - 1;
			while (l < r) {
				if (nums[l] + nums[r] + nums[i] < 0) {
					l++;
				} else if (nums[l] + nums[r] + nums[i] > 0) {
					r--;
				} else {
					vector<int> result;
					result.push_back(nums[i]);
					result.push_back(nums[l]);
					result.push_back(nums[r]);
					results.push_back(result);
					while (l < r && nums[l] == nums[l + 1]) {
						l++;
					}
					while (l < r && nums[r] == nums[r - 1]) {
						r--;
					}
					l++;
					r--;
				}
			}
		}
		return results;
	}
};
