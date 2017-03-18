class Solution {
public:
	string reverseVowels(string s) {
		int i;
		vector<int> sub;
		char c;
		//存储元音字母的下标
		for (i = 0; i < (signed) s.length(); i++) {
			c = s[i];
			if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o')
					|| (c == 'u') || (c == 'A') || (c == 'E') || (c == 'I')
					|| (c == 'O') || (c == 'U')) {
				sub.push_back(i);
			}
		}
		int begin = 0;
		int end = sub.size() - 1;
		while (begin < end) {
			swap(s[sub[begin]], s[sub[end]]);
			begin++;
			end--;
		}
		return s;
	}
};