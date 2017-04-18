class Solution {
public:
	vector<int> constructRectangle(int area) {
		int len;
		int width;
		width = sqrt(area);
		while (area % width) {
			width--;
		}
		len = area / width;
		vector<int> v;
		v.push_back(len);
		v.push_back(width);
		return v;
	}
};