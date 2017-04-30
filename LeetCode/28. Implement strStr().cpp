//solution 1
class Solution {
public:
	int strStr(string haystack, string needle) {
		int i = 0;
		int j = 0;
		int pos = 0;
		if (needle.empty()) {
			return 0;
		}
		if (haystack.length() < needle.length()) {
			return -1;
		}
		while (pos < (signed) haystack.length() - (signed) needle.length() + 1) {
			if (haystack[pos] != needle[j]) {
				pos++;
				j = 0;
			}
			i = pos;
			while (haystack[i] == needle[j] && j < (signed) needle.length()) {
				i++;
				j++;
			}
			if (j == (signed) needle.length()) {
				return i - j;
			} else {
				j = 0;
				pos++;
			}
		}
		return -1;
	}
};
