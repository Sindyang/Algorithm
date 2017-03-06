class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		if (x == 0)
			return true;

		int base = 1;
		//确定base的值
		while (x / base >= 10) {
			base *= 10;
		}

		int left = 0;
		int right = 0;
		while (x) {
			left = x / base;
			right = x % 10;
			if (left != right) {
				return false;
			}
			x -= base * left;
			x /= 10;
			base /= 100;
		}
		return true;
	}
};
