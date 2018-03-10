class Solution {
public:
	vector<string> letterCasePermutation(string S) {
		vector<string> v;
		dfs(v, S, 0);
		return v;
	}

	void dfs(vector<string> &v, string S, int i) {
		if (i == (signed)S.length()) {
			v.push_back(S);
			return;
		}

		if (isalpha(S[i])) {
			S[i] = tolower(S[i]);
			dfs(v, S, i + 1);

			S[i] = toupper(S[i]);
			dfs(v, S, i + 1);
		} else
			dfs(v, S, i + 1);
	}
};
