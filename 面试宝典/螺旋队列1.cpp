/**
 * 螺旋队列问题：
 * 找出规律，并打印出一个N*N的矩阵；
 * 规律就是从首坐标开始顺时针依次增大
 */
#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int array[N][N];
	int num = 1;
	int count = 0;
	int i = -1;
	int j = -1;
	while (num <= N * N) {
		//从左到右打印
		for (i += 1, j += 1; j < N - count; j++)
			array[i][j] = num++;
		//从上到下打印
		for (j -= 1, i += 1; i < N - count; i++)
			array[i][j] = num++;
		//从右向左打印
		for (i -= 1, j -= 1; j >= count; j--)
			array[i][j] = num++;
		//从下到上打印
		for (j += 1, i -= 1; i > count; i--)
			array[i][j] = num++;
		count += 1;
	}
	//输出结果
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
