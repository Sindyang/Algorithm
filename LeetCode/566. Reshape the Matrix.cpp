class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int column = nums[0].size();
        if (row*column == r*c){
            int i = 0;
            int j = 0;
            int count = 0;
            vector<vector<int>> newnums;
            vector<int> newrow;
            while(i < row && j < column){
                newrow.push_back(nums[i][j++]);
                count++;
                if(j == column){
                    j = 0;
                    i++;
                }
                if(count == c){
                    newnums.push_back(newrow);
                    newrow.clear();
                    count = 0;
                }
                
            }
            return newnums;
        }else{
            return nums;
        }
    }
};
