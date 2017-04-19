class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
		int i = 0;
		map<int, int> m1;
		map<int, int> m2;
		vector<int> tempnum;
		vector<int> result;
		for (i = 0; i < (signed) nums.size(); i++) {
			m1[nums[i]] = i;
			m2[i] = nums[i];
		}
		for (i = 0; i < (signed) findNums.size(); i++) {
			int pos = m1[findNums[i]];
			pos += 1;
			if (pos == (signed) nums.size()) {
				result.push_back(-1);
				continue;
			}
			int find;
			bool is_find = false;
			while (pos < (signed) nums.size()) {
				find = m2[pos];
				if (find > findNums[i]) {
					result.push_back(find);
					is_find = true;
					break;
				}
				pos++;
			}
			if (!is_find) {
				result.push_back(-1);
			}

		}
		return result;
	}
};
