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

//solution 2
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
		int next[needle.length()];
		makeNext(needle, next);
		for (i = 0; i < (signed) haystack.length(); i++) {
			while (j > 0 && haystack[i] != needle[j]) {
				j = next[j - 1];
			}
			if (haystack[i] == needle[j]) {
				j++;
			}
			if (j == (signed) needle.length()) {
				return i - j + 1;
			}
		}
		if (j == (signed) needle.length()) {
			return i - j;
		}
		return -1;
	}

	void makeNext(string needle, int *next) {
		int i;
		//最大前后缀长度
		int k = 0;
		next[0] = 0;
		for (i = 1; i < (signed) needle.length(); i++) {
			while (k > 0 && needle[i] != needle[k]) {
				k = next[k - 1];
			}
			if (needle[i] == needle[k]) {
				k++;
			}
			next[i] = k;
		}
	}
};
