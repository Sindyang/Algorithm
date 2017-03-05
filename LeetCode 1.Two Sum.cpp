class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int l = 0;
		int r = nums.size() - 1;
		int i = 0;
		vector<int> result;
		multimap<int, int> m;
		multimap<int, int>::iterator itmulti;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
			int temp = *it;
			m.insert(make_pair(temp, i++));
		}
		sort(nums.begin(), nums.end());
		while (l < r) {
			if (nums[l] + nums[r] == target) {
				if (nums[l] == nums[r]) {
					for (itmulti = m.equal_range(nums[l]).first;
							itmulti != m.equal_range(nums[l]).second;
							itmulti++) {
						result.push_back((*itmulti).second);
					}
				} else {
					itmulti = m.equal_range(nums[l]).first;
					result.push_back((*itmulti).second);
					itmulti = m.equal_range(nums[r]).first;
					result.push_back((*itmulti).second);
				}
				break;
			} else if (nums[l] + nums[r] < target) {
				l++;
			} else {
				r--;
			}
		}
		return result;
	}
};