public void sortColors(int[] nums) {
		int i;
		int len_red = 0;
		int len_white = 0;
		for (i = 0; i < nums.length; i++) {
			if (nums[i] == 0) {
				len_red++;
			} else if (nums[i] == 1) {
				len_white++;
			}
		}
		for (i = 0; i < nums.length; i++) {
			if (i < len_red) {
				nums[i] = 0;
			} else if (i >= len_red && i < len_red + len_white) {
				nums[i] = 1;
			} else if (i >= len_red + len_white) {
				nums[i] = 2;
			}
		}
	}
