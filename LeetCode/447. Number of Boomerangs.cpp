class Solution {
public:
	int numberOfBoomerangs(vector<pair<int, int> >& points) {
		int num = 0;
		for (int i = 0; i < (signed) points.size(); i++) {
			map<int, int> m;
			for (int j = 0; j < (signed) points.size(); j++) {
				if (i == j)
					continue;
				int x = points[i].first - points[j].first;
				int y = points[i].second - points[j].second;
				int dis = x * x + y * y;
				m[dis]++;
			}
			for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
				num += it->second * (it->second - 1);
			}
		}
		return num;
	}
};
