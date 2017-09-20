class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());
		if(g.empty() || s.empty())
			return 0;

		int i = 0;
		int j = 0;
		int num = 0;
		while(i < (signed)g.size() && j < (signed)s.size()){
			if(g[i] <= s[j]){
				num++;
				i++;
				j++;
			}else{
				j++;
			}
		}
		return num;
	}
};
