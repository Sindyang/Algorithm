class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1)
			return s;
		string result;
		for (int i = 0; i < numRows; i++) {
			int j = i;
			int step1;
			int step2;
			if (j == 0 || j == numRows - 1)
				step1 = step2 = (numRows - 1) * 2;
			else {
				step1 = (numRows - i - 1) * 2;
				step2 = 2 * (numRows - 1) - step1;
			}
			bool odd = true;
			for (; j < (signed) s.length();) {
				result += s[j];
				if (odd) {
					j += step1;
					odd = false;
				} else {
					j += step2;
					odd = true;
				}

			}
		}
		return result;
	}
};
