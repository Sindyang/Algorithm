class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		vector<int>::iterator it_current;
		vector<int>::iterator it;
		int i = 0;
		for (it = nums.begin(); it != nums.end(); it++) {
			if (*it != 0) {
				it_current = it;
				while (it_current != nums.begin() + i) {
					*(it_current - 1) = *it_current;
					*it_current = 0;
					it_current -= 1;
				}
				i++;
			}
		}
	}
};