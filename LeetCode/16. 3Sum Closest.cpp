class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int result = INT_MAX;
		int close = INT_MAX;
		for (int i = 0; i < (signed) nums.size() - 2; i++) {
			int l = i + 1;
			int r = nums.size() - 1;
			while (l < r) {
				int sum = nums[i] + nums[l] + nums[r];
				if (sum < target) {
					if (target - sum < close) {
						close = target - sum;
						result = sum;
					}
					l++;
				} else if (sum > target) {
					if (sum - target < close) {
						close = sum - target;
						result = sum;
					}
					r--;
				} else {
					close = 0;
					result = target;
					l++;
					r--;
					while (l < r && nums[l] == nums[l + 1]) {
						l++;
					}
					while (l < r && nums[r] == nums[r - 1]) {
						r--;
					}
				}
			}
			while (i < (signed) nums.size() - 2 && nums[i] == nums[i + 1]) {
				i++;
			}
		}
		return result;
	}
};
