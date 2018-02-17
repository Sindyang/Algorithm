class Solution {
public:
	vector<int> partitionLabels(string S) {
		map<char, int> m;
		//记录每个字母最后一次出现的位置
		for (int i = 0; i < (signed) S.length(); i++) {
			m[S[i]] = i;
		}
		int lastpos = 0;
		int ex = 0;
		vector<int> ans;
		for (int i = 0; i < (signed) S.length(); i++) {
			lastpos = max(lastpos, m[S[i]]);
			if (lastpos == i) {
				ans.push_back(i + 1 - ex);
				ex = i + 1;
			}
		}
		return ans;
	}
};
