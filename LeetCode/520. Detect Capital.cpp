class Solution {
public:
	bool detectCapitalUse(string word) {
		int i = 0;
		int len = word.length();
		bool case1 = true;
		bool case2 = true;
		bool case3 = true;
		while (i < len) {
			if (word[i] >= 'A' && word[i] <= 'Z') {
				if (i != 0) {
					case3 = false;
				}
				case2 = false;
				i++;
			} else if (word[i] >= 'a' && word[i] <= 'z') {
				if (i == 0) {
					case3 = false;
				}
				case1 = false;
				i++;
			}
		}
		bool result = case1 || case2 || case3;
		return result;
	}
};