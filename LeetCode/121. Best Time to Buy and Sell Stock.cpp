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