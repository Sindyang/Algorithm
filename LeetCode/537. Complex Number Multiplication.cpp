class Solution {
public:
	string complexNumberMultiply(string a, string b) {
		int a_real;
		int a_imag;
		int b_real;
		int b_imag;
		stringtonum(a_real, a_imag, a);
		stringtonum(b_real, b_imag, b);
		int real = a_real * b_real - a_imag * b_imag;
		int imag = a_real * b_imag + a_imag * b_real;
		string real_str = num2str(real);
		string imag_str = num2str(imag);
		string result = real_str + "+" + imag_str + "i";
		return result;
	}
	string num2str(int num) {
		stringstream ss;
		ss << num;
		return ss.str();
	}
	void stringtonum(int &real, int &imag, string a) {
		int pos1 = a.find('+');
		int pos2 = a.find('i');
		string real_str;
		string imag_str;
		bool is_neg = false;
		//获取实部
		if (a[0] == '-') {
			real_str = a.substr(1, pos1 - 1);
			is_neg = true;
		} else {
			real_str = a.substr(0, pos1);
		}
		real = atoi(real_str.c_str());
		if (is_neg) {
			real = -real;
		}
		//获取虚部
		is_neg = false;
		if (a[pos1 + 1] == '-') {
			imag_str = a.substr(pos1 + 2, pos2 - pos1 - 2);
			is_neg = true;
		} else {
			imag_str = a.substr(pos1 + 1, pos2 - pos1 - 1);
		}
		imag = atoi(imag_str.c_str());
		if (is_neg) {
			imag = -imag;
		}
	}
};