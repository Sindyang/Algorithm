//Solution 1
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int i;
		int count = 1;
		int max = 1;
		int result = nums.front();
		sort(nums.begin(), nums.end());
		for (i = 1; i < (signed) nums.size(); i++) {
			if (nums[i] == nums[i - 1]) {
				count++;
				if (count > max) {
					max = count;
					result = nums[i];
				}
			} else {
				count = 1;
			}

		}
		return result;
	}
};

//Solution 2
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> m;
		map<int, int>::iterator it;
		int max = 0;
		int result = 0;
		int i;
		for (i = 0; i < (signed) nums.size(); i++) {
			m[nums[i]] += 1;
		}
		for (it = m.begin(); it != m.end(); it++) {
			if (it->second > max) {
				max = it->second;
				result = it->first;
			}
		}
		return result;
	}
};