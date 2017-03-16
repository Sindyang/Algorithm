class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int i;
		map<char, int> m;
		map<char, int>::iterator it;
		for (i = 0; i < (signed) magazine.length(); i++) {
			m[magazine[i]] += 1;
		}
		for (i = 0; i < (signed) ransomNote.length(); i++) {
			if (m[ransomNote[i]] == 0) {
				return false;
			} else {
				m[ransomNote[i]]--;
			}
		}
		return true;
	}
};