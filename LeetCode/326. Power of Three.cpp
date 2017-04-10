class Solution {
public:
	bool isPowerOfThree(int n) {
		double num = log10(n) / log10(3);
		//判断是否为整数
		if (num - int(num) == 0) {
			return true;
		}
		return false;
	}
};