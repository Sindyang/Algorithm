class Solution {
public:
	int findMinDifference(vector<string>& timePoints) {
		int i;
		string str;
		string h;
		string m;
		int hour;
		int minute;
		int time;
		int minTime;
		int diff;
		vector<int> v;
		for (i = 0; i < (signed) timePoints.size(); i++) {
			str = timePoints[i];
			h = str.substr(0, 2);
			m = str.substr(3);
			hour = atoi(h.c_str());
			minute = atoi(m.c_str());
			time = hour * 60 + minute;
			v.push_back(time);
		}
		sort(v.begin(), v.end());
		v.push_back(v.front() + 24 * 60);
		minTime = v[1] - v[0];
		for (i = 1; i < (signed) v.size(); i++) {
			diff = v[i] - v[i - 1];
			if (diff < minTime) {
				minTime = diff;
			}
		}
		return minTime;
	}

};