class Solution {
public:
	int findComplement(int num) {
		int mask = 1;
		int temp = num;
		while (temp) {
			temp >>= 1;
			mask <<= 1;
		}
		return num ^ (mask - 1);
	}
};