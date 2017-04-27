//first solution
class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		for (int i = 0; i < (signed) nums.size(); i++) {
			for (int j = i + 1; j < (signed) nums.size(); j++) {
				if (nums[i] == nums[j]) {
					return nums[j];
				}
			}
		}
		return -1;
	}
};

