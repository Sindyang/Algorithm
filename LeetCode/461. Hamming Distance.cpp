class Solution {
public:
	int hammingDistance(int x, int y) {
		int count = 0;
		int temp = x^y;
		while (temp) {
			count += temp % 2;
			temp >>= 1;
		}
		return count;
	}
};