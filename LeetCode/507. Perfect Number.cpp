class Solution {
public:
	bool checkPerfectNumber(int num) {
		if (num == 1) {
			return false;
		}
		set<int> s;
		set<int>::iterator it;
		for (int i = 1; i <= sqrt(num); i++) {
			if (num % i == 0) {
				s.insert(i);
				s.insert(num / i);
			}
		}
		int sum = 0;
		for (it = s.begin();it != s.end();it++) {
			sum += *it;
		}
		if (sum == 2 * num) {
			return true;
		} else {
			return false;
		}
	}
};
