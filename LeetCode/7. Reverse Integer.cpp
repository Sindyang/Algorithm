/*Solution 1
*通过字符串实现翻转
*/
#include<iostream>
#include<stdlib.h>
#include<limits.h>
#include<sstream>
#include<string>
using namespace std;
class Solution {
public:
	int reverse(int x) {
		bool flag = false;
		if (x < 0) {
			x = abs(x);
			flag = true;
		}
		string str = int2str(x);
		string str_reverse(str.rbegin(), str.rend());
		double num = str2double(str_reverse);
		//判断是否为负数
		if (flag) {
			num = -num;
		}
		//判断是否在INT的取值区间
		if (num < INT_MIN || num > INT_MAX) {
			return 0;
		}
		return num;
	}

	string int2str(const int int_temp) {
		string str_temp;
		stringstream stream;
		stream << int_temp;
		stream >> str_temp;
		return str_temp;
	}
	double str2double(const string str_temp) {
		double int_temp;
		stringstream stream(str_temp);
		stream >> int_temp;
		return int_temp;
	}
};

//Solution 2
#include<iostream>
#include<stdlib.h>
#include<limits.h>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
	int reverse(int x) {
		bool flag = false;
		vector<int> v;
		vector<int>::iterator it;
		double sum = 0;
		double i = 0;
		if (x == 0) {
			return 0;
		}
		//判断是否为负数
		if (x < 0) {
			x = abs(x);
			flag = true;
		}
		//获得求逆后的数值
		while (x != 0) {
			v.push_back(x % 10);
			x /= 10;
		}
		for (it = v.end() - 1; it >= v.begin(); it--) {
			sum += (*it) * pow(10, i);
			i++;
		}

		if (flag) {
			sum = -sum;
		}
		//判断是否在INT的取值区间
		if (sum < INT_MIN || sum > INT_MAX) {
			return 0;
		}
		return sum;
	}
};