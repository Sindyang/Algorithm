class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int i;
		int len = nums.size();
		int elem = 0;
		for (i = 0; i < len; i++) {
			elem = elem ^ nums[i];
		}
		return elem;
	}
};