//solution 1
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int> temp;
		int i = 0;
		int j = 0;
		sort(nums1.begin(), nums1.begin() + m);
		sort(nums2.begin(), nums2.begin() + n);
		while (i < m && j < n) {
			if (nums1[i] < nums2[j]) {
				temp.push_back(nums1[i++]);
			} else if (nums1[i] > nums2[j]) {
				temp.push_back(nums2[j++]);
			} else {
				temp.push_back(nums1[i++]);
				temp.push_back(nums2[j++]);
			}
		}
		while (i < m) {
			temp.push_back(nums1[i++]);
		}
		while (j < n) {
			temp.push_back(nums2[j++]);
		}
		nums1.clear();
		for (i = 0; i < (signed) temp.size(); i++) {
			nums1.push_back(temp[i]);
		}
	}
};

//solution 2
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int i = m - 1;
		int j = n - 1;
		int k = m + n - 1;
		while (i >= 0 && j >= 0) {
			if (nums1[i] > nums2[j]) {
				nums1[k--] = nums1[i--];
			} else if (nums1[i] < nums2[j]) {
				nums1[k--] = nums2[j--];
			} else {
				nums1[k--] = nums1[i--];
				nums1[k--] = nums2[j--];
			}
		}
		while (i >= 0) {
			nums1[k--] = nums1[i--];
		}
		while (j >= 0) {
			nums1[k--] = nums2[j--];
		}
	}
};
