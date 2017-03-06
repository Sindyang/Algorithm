class Solution {
public:
	vector<string> fizzBuzz(int n) {
		string s;
		int i;
		vector<string> v;
		for (i = 1; i <= n; i++) {
			if (i % 15 == 0) {
				v.push_back("FizzBuzz");
			} else if (i % 3 == 0) {
				v.push_back("Fizz");
			} else if (i % 5 == 0) {
				v.push_back("Buzz");
			} else {
				s = Int_to_String(i);
				v.push_back(s);
			}
		}
		return v;
	}
	string Int_to_String(int n) {
		ostringstream stream;
		stream << n;
		return stream.str();
	}
};