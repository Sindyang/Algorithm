class Solution {
public:
	int rob(vector<int>& nums) {
		if (nums.empty())
			return 0;
		if (nums.size() == 1)
			return nums[0];
		else if (nums.size() == 2)
			return max(nums[0], nums[1]);
		vector<int> dp(nums);
		dp[0] = nums[0];
		dp[1] = nums[1];
		for (int i = 2; i < nums.size(); i++) {
			int max = 0;
			for (int j = 0; j < i - 1; j++) {
				if (max < dp[j] + nums[i])
					max = dp[j] + nums[i];
			}
			dp[i] = max;
		}

		int bestnum = 0;
		for (int i = 0; i < (signed) dp.size(); i++) {
			if (bestnum < dp[i])
				bestnum = dp[i];
		}
		return bestnum;
	}
};
