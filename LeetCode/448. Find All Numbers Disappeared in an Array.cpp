class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		int i;
		int len = nums.size();
		vector<int> result;
		if (len) {
			int array[len];
			memset(array, 0, sizeof(int) * len);
			for (i = 0; i < len; i++) {
				array[nums[i] - 1] = -1;
			}
			for (i = 0; i < len; i++) {
				if (array[i] == 0) {
					result.push_back(i + 1);
				}
			}
		}
		return result;
	}
};