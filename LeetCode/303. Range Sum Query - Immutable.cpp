class NumArray {
public:
	NumArray(vector<int> nums) {
		if (nums.empty())
			return;
		sums.push_back(nums[0]);
		for (int i = 1; i < (signed) nums.size(); i++) {
			sums.push_back(sums[i - 1] + nums[i]);
		}
	}

	int sumRange(int i, int j) {
		if (i == 0)
			return sums[j];
		int len = sums.size();
		if (i < 0 || i >= len || j < 0 || j >= len || i > j) {
			return 0;
		}
		return sums[j] - sums[i - 1];
	}
private:
	vector<int> sums;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
