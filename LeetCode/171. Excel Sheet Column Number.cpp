class Solution {
public:
	int titleToNumber(string s) {
		int len = s.length();
		int i;
		int sum = 0;
		for (i = 0; i <= len - 1; i++) {
			sum = sum * 26 + (int) (s[i] - 'A') + 1;
		}
		return sum;
	}
};