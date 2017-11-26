class Solution {
public:
	int findLHS(vector<int>& nums) {
		if (nums.empty())
			return 0;
		map<int, int> lens;
		for (int i = 0; i < (signed) nums.size(); i++) {
			lens[nums[i]]++;
		}

		int max = 0;
		map<int, int>::iterator it = lens.begin();
		int preindex = it->first;
		int prelen = it->second;
		for (++it; it != lens.end(); it++) {
			int index = it->first;
			int len = it->second;
			if (preindex + 1 == index) {
				int temp = prelen + len;
				if (temp > max) {
					max = temp;
				}
			}
			preindex = index;
			prelen = len;
		}
		return max;
	}
};
