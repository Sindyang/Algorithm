class Solution {
public:
	string frequencySort(string s) {
		map<char, int> m;
		map<char, int>::iterator it_m;
		vector<pair<char, int> > v;
		vector<pair<char, int> >::iterator it_v;
		string result;
		for (int i = 0; i < (signed) s.length(); i++) {
			m[s[i]]++;
		}
		for (it_m = m.begin(); it_m != m.end(); it_m++) {
			pair<char, int> temp(it_m->first, it_m->second);
			v.push_back(temp);
		}
		sort(v.begin(), v.end(), cmp());
		for (it_v = v.begin(); it_v != v.end(); it_v++) {
			int count = it_v->second;
			char ch = it_v->first;
			while (count) {
				result += ch;
				count--;
			}

		}
		return result;
	}
	struct cmp {
		bool operator()(pair<char, int> a, pair<char, int> b) const {
			return (a.second > b.second);
		}
	};
};
