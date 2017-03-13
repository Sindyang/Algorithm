class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int i;
		int maxprofit = 0;
		if (prices.empty()) {
			return 0;
		}
		for (i = 1; i < (signed) prices.size(); i++) {
			if (prices[i] - prices[i - 1] > 0) {
				maxprofit += prices[i] - prices[i - 1];
			}
		}
		return maxprofit;
	}
};