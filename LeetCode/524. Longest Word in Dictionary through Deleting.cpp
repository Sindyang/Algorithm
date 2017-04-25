class Solution {
public:
	string findLongestWord(string s, vector<string>& d) {
		int i;
		int ps;
		int pd;
		int max_size = 0;
		set<string> res;
		set<string>::iterator it;
		string result;
		for (i = 0; i < (signed) d.size(); i++) {
			ps = pd = 0;
			while (ps < (signed) s.length()) {
				if (s[ps] == d[i][pd]) {
					ps++;
					pd++;
				} else {
					ps++;
				}
				if (pd == (signed) d[i].length()) {
					res.insert(d[i]);
					break;
				}
			}
		}
		if (res.size() == 0) {
			return "";
		}
		for (it = res.begin(); it != res.end(); it++) {
			if ((signed) (*it).length() > max_size) {
				result = *it;
				max_size = (signed) (*it).length();
			}
		}
		return result;
	}
};
