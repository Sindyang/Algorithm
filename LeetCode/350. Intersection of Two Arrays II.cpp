class Solution {
public:
	bool cmp(int &a, int &b) {
		return a > b;
	}
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		//对nums1和nums2进行排序
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		//判断两个数组的大小
		if (nums1.size() < nums2.size()) {
			vector<int> temp(nums2);
			nums2.swap(nums1);
			nums1.swap(nums2);
		}
		int i = 0;
		int j = 0;
		vector<int> result;
		while (i < (signed) nums1.size() && j < (signed) nums2.size()) {
			if (nums1[i] < nums2[j]) {
				i++;
			} else if (nums1[i] > nums2[j]) {
				j++;
			} else {
				while ((nums1[i] == nums2[j]) && (i < (signed) nums1.size())
						&& (j < (signed) nums2.size())) {
					result.push_back(nums1[i]);
					i++;
					j++;
				}
			}
		}
		return result;
	}
};
