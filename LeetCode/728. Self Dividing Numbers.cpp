class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> v;
		for (int i = left; i <= right; i++) {
			//加入个位数
			if (i / 10 == 0) {
				v.push_back(i);
				continue;
			}
			if (isSelfDividingNumbers(i))
				v.push_back(i);
		}
		return v;
	}

	bool isSelfDividingNumbers(int num) {
		int temp = num;
		int digit;
		while (temp != 0) {
			digit = temp % 10;
			temp = temp / 10;
			if (digit == 1)
				continue;
			if (digit == 0)
				return false;
			if (num % digit != 0)
				return false;
		}
		return true;
	}
};
