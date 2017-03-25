class Solution {
public:
	string convertToTitle(int n) {
		int sub;
		string str = "";
		char c;
		while (n != 0) {
			sub = (n - 1) % 26;
			c = (char) (sub + 'A');
			str = c + str;
			n = (n - 1) / 26;
		}
		return str;
	}
};