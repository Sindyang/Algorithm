class Solution {
public:
	int singleNonDuplicate(vector<int>& nums) {
		int single = nums[0];
		for (int i = 1; i < (signed) nums.size(); i++) {
			single = single ^ nums[i];
		}
		return single;
	}
};
