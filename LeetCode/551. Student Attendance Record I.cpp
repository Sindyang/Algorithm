class Solution {
public:
	bool checkRecord(string s) {
		int numA = 0;
		int i = 0;
		while (i < s.length()) {
			if (s[i] == 'A') {
				numA += 1;
				if (numA == 2) {
					return false;
				}
			} else if (s[i] == 'L') {
				if ((i + 1) < s.length() && (i + 2) < s.length()) {
					if(s[i+1] == 'L' && s[i+2] == 'L'){
						return false;
					}
				}
			}
			i++;
		}
		return true;
	}
};
