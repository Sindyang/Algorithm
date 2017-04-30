//solution 1
class Solution {
public:
	int strStr(string haystack, string needle) {
		int i = 0;
		int j = 0;
		if (needle.empty()) {
			return 0;
		}
		if (haystack.length() < needle.length()) {
			return -1;
		}
		while (i < (signed) haystack.length() && j < (signed) needle.length()) {
			if (haystack[i] == needle[j]) {
				i++;
				j++;
			} else {
				i = i - j + 1;
				j = 0;
			}
		}
		if (j == (signed) needle.length()) {
			return i - j;
		} else {
			return -1;
		}
	}
};
