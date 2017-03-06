class Solution {
public:
	int hammingDistance(int x, int y) {
		int count = 0;
		while (x || y) {
			//x的最低位和y的最低位不相同
			if ((x & 1) ^ (y & 1)) {
				count++;
			}
			x >>= 1;
			y >>= 1;
		}
		return count;
	}

};