class Solution {
public:
	int integerBreak(int n) {
		if (n <= 3) {
			return n - 1;
		}
		int res = n % 3;
		int quo = n / 3;
		if (res == 0) {
			return pow(3, quo);
		} else if (res == 1) {
			return pow(3, quo - 1) * 4;
		} else if (res == 2) {
			return pow(3, quo) * 2;
		}
		return 0;
	}
};

