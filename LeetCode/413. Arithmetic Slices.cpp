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
<<<<<<< HEAD
			//�ж�����3��Ԫ��֮���Ƿ���ͬ
=======
			//判断相邻3个元素之差是否相同
>>>>>>> 871138e71cbb4f75b81a7239b7051cb088f56345
			if ((A[i] - A[temp1]) == (A[temp1] - A[temp2])) {
				len_ari += 1;
				flag_ari = true;
			} else {
				flag_ari = false;
			}
<<<<<<< HEAD
			//���������еĸ���
=======
			//计算子序列的个数
>>>>>>> 871138e71cbb4f75b81a7239b7051cb088f56345
			if ((len_ari != 0 && !flag_ari) || ((i + 1) == len)) {
				sub_sum = len_ari * (len_ari + 1) / 2;
				sum += sub_sum;
				len_ari = 0;
			}
		}
		return sum;
	}
};