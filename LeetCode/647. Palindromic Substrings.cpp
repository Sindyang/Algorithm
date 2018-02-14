class Solution {
public:
	int countSubstrings(string s) {
		int len = s.length();
		int dp[len][len] = { 0 };
		int sum = 0;
		for (int i = len - 1; i >= 0; i--) {
			for (int j = i; j < len; j++) {
				dp[i][j] = (s[i] == s[j])
						&& ((j - i < 3) || (dp[i + 1][j - 1]));
				if (dp[i][j])
					sum += 1;
			}
		}
		return sum;
	}

};
