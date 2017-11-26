class Solution {
public:
	string countAndSay(int n) {
		int i = 1;
		string str = "1";
		string result;
		int count = 1;
		while (i < n) {
			for (int j = 1; j < (signed)str.length(); j++) {
				if (str[j] == str[j - 1]) {
					count++;
				} else {
					result = result + char(count + '0') + str[j - 1];
					count = 1;
				}
			}
			result = result + char(count + '0') + str[str.length() - 1];
			str = result;
			result = "";
			i++;
			count = 1;
		}
		return str;
	}
};
