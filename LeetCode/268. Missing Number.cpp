class Solution {
public:
	int missingNumber(vector<int>& nums) {
		int i;
		int len = nums.size();
		int ExpectedSum = len * (len + 1) / 2;
		for (i = 0; i < (signed) nums.size(); i++) {
			ExpectedSum -= nums[i];
		}
		return ExpectedSum;
	}
};