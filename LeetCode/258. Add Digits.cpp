//Solution 1 循环实现
#include<iostream>
#include<sstream>
#include<stdlib.h>
#include<string>
using namespace std;
class Solution {
public:
	int addDigits(int num) {
		int i;
		int digit;
		int sum;
		string str = int2str(num);
		while (str.length() > 1) {
			sum = 0;
			for (i = 0; i < (signed) str.length(); i++) {
				digit = str[i] - '0';
				sum += digit;
			}
			str = int2str(sum);
		}
		int result = atoi(str.c_str());
		return result;
	}

	string int2str(const int &int_temp) {
		string string_temp;
		stringstream stream;
		stream << int_temp;
		//此处也可以用 string_temp=stream.str();
		stream >> string_temp;
		return string_temp;
	}
};

//Solution 1 递归实现
#include<iostream>
#include<sstream>
#include<stdlib.h>
#include<string>
using namespace std;
class Solution {
public:
	int addDigits(int num) {
		int i;
		int digit;
		int sum = 0;
		string str = int2str(num);
		for (i = 0; i < (signed) str.length(); i++) {
			digit = str[i] - '0';
			sum += digit;
		}
		if (str.length() > 1) {
			sum = addDigits(sum);
		}
		return sum;
	}

	string int2str(const int &int_temp) {
		string string_temp;
		stringstream stream;
		stream << int_temp;
		//此处也可以用 string_temp=stream.str();
		stream >> string_temp;
		return string_temp;
	}
};

//Solution 2
class Solution {
public:
	int addDigits(int num) {
		if (num == 0)
			return 0;
		int result = (num % 9 == 0 ? 9 : (num % 9));
		return result;
	}
};