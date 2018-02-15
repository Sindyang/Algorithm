class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int dp[nums.size()] = { 0 };
		dp[0] = nums[0];
		int maxnumber = nums[0];
		for (int i = 1; i < (signed) nums.size(); i++) {
			dp[i] = max(dp[i - 1] + nums[i], nums[i]);
			if (maxnumber < dp[i])
				maxnumber = dp[i];
		}
		return maxnumber;
	}
};
