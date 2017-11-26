class Solution {
public:
	vector<string> findRestaurant(vector<string>& list1,
			vector<string>& list2) {
		multimap<int, string> m;
		vector<string>::iterator it;
		for (int i = 0; i < (signed) list1.size(); i++) {
			it = find(list2.begin(), list2.end(), list1[i]);
			if (it != list2.end()) {
				int index = distance(list2.begin(), it);
				m.insert(make_pair(i + index, list1[i]));
			}
		}
		vector<string> result;
		multimap<int, string>::iterator itmap = m.begin();
		for (; itmap != m.end(); itmap++) {
			if (itmap->first == m.begin()->first) {
				result.push_back(itmap->second);
			} else
				break;
		}
		return result;
	}
};
