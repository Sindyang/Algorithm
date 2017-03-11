class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		int i;
		int len = nums.size();
		int right = 1;
		vector<int> result(len, 1);
		for (i = 1; i < len; i++) {
			result[i] = result[i - 1] * nums[i - 1];
		}
		for (i = len - 2; i >= 0; i--) {
			right *= nums[i + 1];
			result[i] *= right;
		}
		return result;
	}
};