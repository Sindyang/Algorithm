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
			//�ж�����3��Ԫ��֮���Ƿ���ͬ
			if ((A[i] - A[temp1]) == (A[temp1] - A[temp2])) {
				len_ari += 1;
				flag_ari = true;
			} else {
				flag_ari = false;
			}
			//���������еĸ���
			if ((len_ari != 0 && !flag_ari) || ((i + 1) == len)) {
				sub_sum = len_ari * (len_ari + 1) / 2;
				sum += sub_sum;
				len_ari = 0;
			}
		}
		return sum;
	}
};