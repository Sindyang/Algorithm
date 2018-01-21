class Solution {
public:
	string intToRoman(int num) {
		string one[] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII",
				"IX" };
		string ten[] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX",
				"XC" };
		string hundred[] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC",
				"DCCC", "CM" };
		string thousand[] = { "", "M", "MM", "MMM" };
		string* collect[] = { one, ten, hundred, thousand };

		int index = 0;
		string result = "";
		while (num) {
			result = collect[index][num % 10] + result;
			num /= 10;
			index++;
		}
		return result;
	}
};
