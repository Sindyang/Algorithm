class Solution {
public:
	int distributeCandies(vector<int>& candies) {
		set<int> s;
		int num = 0;
		for (int i = 0; i < candies.size(); i++) {
			s.insert(candies[i]);
			num++;
		}
		num /= 2;
		if (num >= s.size()) {
			return s.size();
		} else {
			return num;
		}
	}
};
