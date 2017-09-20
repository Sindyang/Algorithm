class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() <= 1)
            return false;
        for(int i = 1;i < (signed)nums.size();i++){
            if(nums[i-1] == nums[i]){
                return true;
                break;
            }
        }
        return false;
    }
};
