class Solution {
public:
	int maxPoints(vector<Point>& points) {
		if (points.size() <= 2)
			return points.size();

		int max = 0;
		for (unsigned int i = 0; i < points.size(); i++) {
			map<pair<int, int>, int> slope;

			double x1 = (double) points[i].x;
			double y1 = (double) points[i].y;

			int samex = 0;
			int same = 0;
			for (unsigned int j = 0; j < points.size(); j++) {
				if (i == j)
					continue;

				double x2 = (double) points[j].x;
				double y2 = (double) points[j].y;

				if (x1 == x2 && y1 == y2)
					same++;
				else if (x1 == x2)
					samex++;
				else {
					int num1 = y1 - y2;
					int num2 = x1 - x2;
					int common = gcd(num1, num2);
					num1 /= common;
					num2 /= common;
					slope[pair<int, int>(num1, num2)]++;
				}
			}
			int local_max = 0;
			for (map<pair<int,int>, int>::iterator it = slope.begin();
					it != slope.end(); it++) {
				if (it->second > local_max)
					local_max = it->second;
			}
			if (samex > local_max)
				local_max = samex;
			local_max += same;
			if (local_max > max)
				max = local_max;
		}
		return max + 1;
	}

	int gcd(int num1, int num2) {
		if (num2 == 0)
			return num1;
		return gcd(num2, num1 % num2);
	}
};
