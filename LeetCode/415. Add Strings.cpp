class Solution {
public:
	string addStrings(string num1, string num2) {
		string result = "";
		if (num1.length() < num2.length()) {
			string temp = num1;
			num1 = num2;
			num2 = temp;
		}
		int len1 = num1.length();
		int len2 = num2.length();
		for (int i = 0; i < len1 - len2; i++) {
			num2 = '0' + num2;
		}
		int carry = 0;
		int digit = 0;
		for (int i = len1 - 1; i >= 0; i--) {
			digit = carry + num1[i] - '0' + num2[i] - '0';
			if (digit >= 10) {
				carry = digit / 10;
				digit = digit % 10;
			} else {
				carry = 0;
			}
			result += digit + '0';
		}
		if (carry)
			result += carry + '0';
		reverse(result.begin(), result.end());
		return result;
	}
};