//solution 1
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int maxprofit = 0;
		if(prices.empty()){
			return 0;
		}
		int minprice = prices.front();
		int i;
		for (i = 1; i < (signed) prices.size(); i++) {
			if (prices[i] - minprice > maxprofit) {
				maxprofit = prices[i] - minprice;
			}
			if (prices[i] < minprice) {
				minprice = prices[i];
			}
		}
		return maxprofit;
	}
};

//solution 2
class Solution {
public:
	int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        
        int dp[prices.size()];
		dp[0] = 0;
		int maxnum = 0;
		for (int i = 1; i < (signed) prices.size(); i++) {
			int temp = prices[i] - prices[i - 1];
			dp[i] = dp[i - 1] + temp;
			if(dp[i] < 0)
				dp[i] = 0;
			if (maxnum < dp[i])
				maxnum = dp[i];
		}
		return maxnum;
	}
};

