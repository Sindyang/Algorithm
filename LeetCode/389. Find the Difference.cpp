class Solution {
public:
	char findTheDifference(string s, string t) {
		int i;
		char result;
		int len = s.length();
		map<char, int> m;
		//初始化
		/*for (i = 0; i < len + 1; i++) {
			m[t[i]] = 0;
		}*/
		for (i = 0; i < len; i++) {
			m[s[i]] += 1;
		}
		for (i = 0; i < len + 1; i++) {
			m[t[i]] -= 1;
		}
		for (i = 0; i < len + 1; i++) {
			if (m[t[i]] == -1) {
				result = t[i];
				break;
			}
		}
		return result;
	}
};