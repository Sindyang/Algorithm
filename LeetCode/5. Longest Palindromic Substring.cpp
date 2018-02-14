class Solution {
public:
	string longestPalindrome(string s) {
		bool dp[s.length()][s.length()] = { false };
		//自身为回文
		for (unsigned int i = 0; i < s.length(); i++) {
			dp[i][i] = true;
		}

		//与相邻字符相同，回文
		int maxbegin = 0;
		int maxlen = 1;
		for (unsigned int i = 0; i < s.length() - 1; i++) {
			if (s[i] == s[i + 1]) {
				dp[i][i + 1] = true;
				maxbegin = i;
				maxlen = 2;
			}

		}

		for (int i = s.length() - 3; i >= 0; i--) {
			for (int j = i + 2; j < (signed)s.length(); j++) {
				if (s[i] == s[j] && dp[i + 1][j - 1]) {
					dp[i][j] = true;
					if (maxlen < (j - i + 1)) {
						maxlen = j - i + 1;
						maxbegin = i;
					}
				}

			}
		}
		return s.substr(maxbegin, maxlen);
	}
};
