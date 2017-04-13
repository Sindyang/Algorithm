class Solution {
public:
	string originalDigits(string s) {
		int i;
		int j;
		int array[26];
		int num[10];
		memset(array, 0, sizeof(int) * 26);
		memset(num, 0, sizeof(int) * 10);
		for (i = 0; i < (signed) s.length(); i++) {
			array[s[i] - 'a']++;
		}
		array['f' - 'a'] -= array['u' - 'a'];
		array['s' - 'a'] -= array['x' - 'a'];
		num[0] = array['z' - 'a'];
		num[2] = array['w' - 'a'];
		num[4] = array['u' - 'a'];
		num[3] = array['r' - 'a'] - num[4] - num[0];
		num[5] = array['f' - 'a'];
		num[6] = array['x' - 'a'];
		num[7] = array['s' - 'a'];
		num[8] = array['g' - 'a'];
		num[9] = array['i' - 'a'] - num[5] - num[6] - num[8];
		num[1] = array['n' - 'a'] - num[7] - num[9] * 2;
		char c;
		string str = "";
		for (i = 0; i < 10; i++) {
			for (j = 0; j < num[i]; j++) {
				c = '0' + i;
				str += c;
			}
		}
		return str;
	}
};