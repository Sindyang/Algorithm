class Solution {
public:
	int findPoisonedDuration(vector<int>& timeSeries, int duration) {
		int i;
		int sum = 0;
		if (timeSeries.size() == 0)
			return 0;
		for (i = 1; i < (signed) timeSeries.size(); i++) {
			if (timeSeries[i] - timeSeries[i - 1] >= duration) {
				sum += duration;
			} else {
				sum += timeSeries[i] - timeSeries[i - 1];
			}
		}
		sum += duration;
		return sum;
	}
};