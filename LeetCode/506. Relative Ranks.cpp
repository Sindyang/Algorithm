class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& nums) {
		map<int, int> m;
		map<int, int>::reverse_iterator rit;
		vector<string> result(nums.size());
		for (int i = 0; i < (signed) nums.size(); i++) {
			m[nums[i]] = i;
		}
		int count = 1;
		for (rit = m.rbegin(); rit != m.rend(); rit++) {
			if (count == 1) {
				result[rit->second] = "Gold Medal";
			} else if (count == 2) {
				result[rit->second] = "Silver Medal";
			} else if (count == 3) {
				result[rit->second] = "Bronze Medal";
			} else {
				result[rit->second] = int2str(count);
			}
			count++;
		}
		return result;
	}
	string int2str(const int num) {
		stringstream stream;
		stream << num;
		return stream.str();
	}
};
