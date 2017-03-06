class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		int i;
		vector<int> result;
		map<int, int> m;
		int len1 = nums1.size();
		int len2 = nums2.size();
		for (i = 0; i < len1; i++) {
			m[nums1[i]] = 1;
		}
		for (i = 0; i < len2; i++) {
			//判断nums2中的元素是否在num1中
			if (m[nums2[i]] == 1) {
				m[nums2[i]] = 0;
				result.push_back(nums2[i]);
			}
		}
		return result;
	}
};