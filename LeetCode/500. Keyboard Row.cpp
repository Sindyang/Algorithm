class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		string rows[] = { "qwertyuiop", "asdfghjkl", "zxcvbnm" };
		vector<string> output;

		vector<string>::iterator it;
		for (it = words.begin(); it != words.end(); it++) {
			int i = 0;
			char *pos;
			bool flag = true;
			string word = *it;
			char letter = tolower(word[0]);
			while (i <= 2) {
				pos = strchr(&rows[i][0], letter);
				if (pos != NULL) {
					break;
				}
				i += 1;
			}
			for (int j = 1; j < (signed) word.length(); j++) {
				letter = tolower(word[j]);
				pos = strchr(&rows[i][0], letter);
				if (pos == NULL) {
					flag = false;
					break;
				}
			}
			if (flag)
				output.push_back(*it);
		}
		return output;
	}
};