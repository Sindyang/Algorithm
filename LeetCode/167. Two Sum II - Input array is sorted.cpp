class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int> result;
		int begin = 0;
		int end = numbers.size() - 1;
		int sum;
		while (begin < end) {
			sum = numbers[begin] + numbers[end];
			if (sum < target) {
				begin++;
			} else if (sum > target) {
				end--;
			} else {
				result.push_back(begin + 1);
				result.push_back(end + 1);
				break;
			}
		}
		return result;
	}
};