class Solution {
public:
	vector<int> nextGreaterElements(vector<int>& nums) {
		int i;
		int j;
		int count;
		vector<int> result;
		for (i = 0; i < (signed) nums.size(); i++) {
			if (i == (signed) nums.size() - 1) {
				j = 0;
			} else {
				j = i + 1;
			}
			for (count = 1; count <= (signed) nums.size() - 1; count++, j++) {
				if (j == (signed) nums.size()) {
					j = 0;
				}
				if (nums[j] > nums[i]) {
					result.push_back(nums[j]);
					break;
				}
			}
			if (count == (signed) nums.size()) {
				result.push_back(-1);
			}
		}
		return result;
	}
};
