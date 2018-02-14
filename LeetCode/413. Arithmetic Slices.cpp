//solution 1
class Solution {
public:
	int numberOfArithmeticSlices(vector<int>& A) {
		int len = A.size();
		int len_ari = 0;
		int sum = 0;
		int sub_sum = 0;
		bool flag_ari = false;
		for (int i = 2; i < len; i++) {
			int temp1 = i - 1;
			int temp2 = i - 2;
			//判断相邻3个元素之差是否相同
			if ((A[i] - A[temp1]) == (A[temp1] - A[temp2])) {
				len_ari += 1;
				flag_ari = true;
			} else {
				flag_ari = false;
			}
			//计算子序列的个数
			if ((len_ari != 0 && !flag_ari) || ((i + 1) == len)) {
				sub_sum = len_ari * (len_ari + 1) / 2;
				sum += sub_sum;
				len_ari = 0;
			}
		}
		return sum;
	}
};

//solution 2
class Solution {
public:
	int numberOfArithmeticSlices(vector<int>& A) {
		int len = A.size();
        if(len < 3)
            return 0;
		//dp[i][j]代表下标为i的元素与下标为j的元素是否构成等差数列
		int dp[len] = { 0 };
		for (int i = 2; i < len; i++) {
			int index1 = i - 1;
			int index2 = i - 2;
			if (A[i] - A[index1] == A[index1] - A[index2]) {
				dp[i] = dp[i - 1] + 1;
			}
		}

		int count = 0;
		int sum = 0;
		for (int i = 2; i < len; i++) {
			if (dp[i] > 0) {
				count++;
			} else {
				sum += count * (count + 1) / 2;
				count = 0;
			}
			if (i + 1 == len) {
				sum += count * (count + 1) / 2;
			}
		}

		return sum;
	}
};
