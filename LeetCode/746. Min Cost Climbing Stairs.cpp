class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {
		int dp[cost.size() + 1] = { 0 };
		for (int i = 2; i <= (signed) cost.size(); i++) {
			dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
		}
		return dp[cost.size()];
	}
};
