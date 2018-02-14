class Solution {
public:
	int lengthOfLIS(vector<int>& nums) {
		vector<int> dp(nums.size(), 1);
		for (int i = 1; i < (signed) nums.size(); i++) {
			int max = 1;
			for (int j = 0; j < i; j++) {
				if (nums[j] < nums[i]) {
					if (max < dp[j] + 1)
						max = dp[j] + 1;
				}
			}
			dp[i] = max;

		}

		int max = 0;
		for (int i = 0; i < (signed) nums.size(); i++) {
			if (max < dp[i])
				max = dp[i];
		}
		return max;
	}
};
