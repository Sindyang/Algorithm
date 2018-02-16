class Solution {
public:
	static bool cmp(const vector<int> &v1, const vector<int> &v2) {
		if (v1[1] == v2[1])
			return v1[0] <= v2[0];
		else
			return v1[1] < v2[1];
	}
	int findLongestChain(vector<vector<int> >& pairs) {
		sort(pairs.begin(), pairs.end(), cmp);
		//for (int i = 0; i < (signed) pairs.size(); i++)
		//cout << pairs[i][0] << " " << pairs[i][1] << endl;

		vector<int> dp(pairs.size());
		dp[0] = 1;
		int maxnum = 1;
		for (int i = 1; i < (signed) pairs.size(); i++) {
			for (int j = 0; j < i; j++) {
				if (pairs[i][0] > pairs[j][1]) {
					dp[i] = max(dp[i], dp[j] + 1);
				}
			}
			if (maxnum < dp[i])
				maxnum = dp[i];
		}
		return maxnum;
	}
};
