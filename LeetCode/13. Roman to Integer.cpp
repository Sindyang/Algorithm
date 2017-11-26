class Solution {
public:
	int romanToInt(string s) {
		int result = 0;
		char letter[7] = { 'I', 'X', 'C', 'M', 'V', 'L', 'D' };
		int num[7] = { 1, 10, 100, 1000, 5, 50, 500 };
		map<char, int> m;
		for (int i = 0; i < 7; i++) {
			m.insert(pair<char, int>(letter[i], num[i]));
		}

		for (int i = 0; i < (signed) s.length() - 1; i++) {
			if (m[s[i]] >= m[s[i + 1]])
				result += m[s[i]];
			else
				result -= m[s[i]];
		}
		result += m[s[s.length() - 1]];
		return result;
	}
};
