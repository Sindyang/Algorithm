// solution 1
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

// solution 2
class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<int> ans;
		for (int i = 0; i < (signed) nums.size(); i++) {
			int index = abs(nums[i]) - 1;
			if (nums[index] > 0)
				nums[index] *= -1;
			else
				continue;
		}
		for (int i = 0; i < (signed) nums.size(); i++)
			if (nums[i] > 0)
				ans.push_back(i + 1);
		return ans;
	}
};
