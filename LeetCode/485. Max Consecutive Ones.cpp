class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>& nums) {
		int i = 0;
		int len = nums.size();
		int sum = 0;
		int maxsum = 0;
		while (i < len) {
			sum = (sum + nums[i]) * nums[i];
			if (maxsum < sum) {
				maxsum = sum;
			}
			i++;
		}
		return maxsum;
	}
};