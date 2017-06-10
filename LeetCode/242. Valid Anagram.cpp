class Solution {
public:
	bool isAnagram(string s, string t) {
		map<char, int> m;
		map<char, int>::iterator it;
		for (int i = 0; i < (signed) s.length(); i++) {
			m[s[i]]++;
		}
		for (int i = 0; i < (signed) t.length(); i++) {
				m[t[i]]--;
		}
		for (it = m.begin(); it != m.end(); it++) {
			if (it->second != 0) {
				return false;
			}
		}
		return true;
	}
};
