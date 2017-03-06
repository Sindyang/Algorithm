class Solution {
public:
	vector<int> countBits(int num) {
		int i;
		int temp;
		int count = 0;
		vector<int> v;
		for (i = 0; i <= num; i++) {
			temp = i;
			while (temp) {
				if ((temp & 1) == 1) {
					count++;
				}
				temp >>= 1;
			}
			v.push_back(count);
			count = 0;
		}
		return v;
	}
};