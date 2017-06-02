bool cmp(const pair<int, int> &x, const pair<int, int> &y) {
	return x.second > y.second;
}
class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		map<int, int> m;
		map<int, int>::iterator it_m;
		vector<pair<int, int> > v;
		vector<int> result;
		for (int i = 0; i < (signed) nums.size(); i++) {
			m[nums[i]]++;
		}
		for (it_m = m.begin(); it_m != m.end(); it_m++) {
			v.push_back(make_pair(it_m->first, it_m->second));
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < k; i++) {
			result.push_back(v[i].first);
		}
		return result;
	}

};
