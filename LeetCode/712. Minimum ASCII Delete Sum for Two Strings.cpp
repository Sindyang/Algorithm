class Solution {
public:
	int minimumDeleteSum(string s1, string s2) {
		//dp[i][j]代表s1的前i个字符与s2的前j个字符相等所需要删除的最小ascii码
		int dp[s1.length() + 1][s2.length() + 1] = {0};
		//初始化
		for (int i = 1; i <= (signed) s1.length(); i++) {
			dp[i][0] = dp[i - 1][0] + (int) s1[i - 1];
		}
		for (int i = 1; i <= (signed) s2.length(); i++)
			dp[0][i] = dp[0][i - 1] + (int) s2[i - 1];

		for (int i = 1; i <= (signed) s1.length(); i++) {
			for (int j = 1; j <= (signed) s2.length(); j++) {
				//字符相等，不需要删除元素
				if (s1[i - 1] == s2[j - 1])
					dp[i][j] = dp[i - 1][j - 1];
				else {
					// 1.dp[i-1][j] + str1[i]:由于从dp[i-1][j]到dp[i][j]是多考虑了str1的一个字符，但是str2字符数没变，所以要想相同，必须删除str[i]
					// 2.dp[i][j-1] + str1[j]:对应于1，这个是多考虑str2的一个字符，所以要删除str2[j]
					dp[i][j] = min(dp[i - 1][j] + (int) s1[i - 1],
							dp[i][j - 1] + (int) s2[j - 1]);
				}
			}
		}
		return dp[s1.length()][s2.length()];
	}
};
