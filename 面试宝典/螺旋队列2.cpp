/**
 * 螺旋队列问题：
 * 看清以下数字排列的规律，设1点的坐标是(0,0)，x方向向右为正，y方向向下为正。
 * 例如，7点的坐标为(-1,-1)，2点的坐标为(0,1)，3点的坐标为(1,1)。
 * 编程实现输入任意一点坐标(x,y)，输出所对应的数字。
 * 21  22  23  24  25
 * 20  7   8   9   10
 * 19  6   1   2   11
 * 18  5   4   3   2
 * 17  16  15  14  13
 */
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	//所在的层数
	int num;
	int t = max(abs(x), abs(y));
	if (y == t) {
		num = pow((2 * t - 1), 2) + 3 * t;
		num -= x;
	} else if (x == -t) {
		num = pow((2 * t - 1), 2) + 5 * t;
		num -= y;
	} else if (y == -t) {
		num = pow((2 * t - 1), 2) + 7 * t;
		num += x;
	} else if (x == t) {
		num = pow((2 * t - 1), 2) + t;
		num += y;
	}
	cout << num << endl;
	return 0;
}
