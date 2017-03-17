class Solution {
public:
	string reverseStr(string s, int k) {
		int begin;
		int end = s.length() - 1;
		int i;
		int j;
		for (begin = 0; begin <= end; begin += 2 * k) {
			i = begin;
			j = begin + k - 1;
			if (j > end) {
				j = end;
			}
			while (i < j) {
				swap(s[i], s[j]);
				i++;
				j--;
			}
		}
		return s;
	}
};