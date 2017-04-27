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

//second solution
class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		int fast = 0;
		int slow = 0;
		do {
			slow = nums[slow];
			fast = nums[nums[fast]];
		} while (slow != fast);
		fast = 0;
		while (fast != slow) {
			fast = nums[fast];
			slow = nums[slow];
		}
		return fast;
	}
};
