class Solution {
public:
	int longestPalindrome(string s) {
		map<char, int> m;
		int len = 0;
		int max_single = 1;
		int flag = false;
		for (int i = 0; i < (signed) s.length(); i++) {
			m[s[i]]++;
		}
		for (int i = 0; i < (signed) m.size(); i++) {
			if (m[i] % 2 == 0) {
				len += m[i];
			} else {
				flag = true;
				if (m[i] > max_single) {
					len += m[i] - 1;
					max_single = m[i];
				} else {
					len += m[i] - 1;
				}
			}
		}
		if (flag)
			len += 1;
		return len;
	}
};
