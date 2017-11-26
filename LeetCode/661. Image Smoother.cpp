class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int row = M.size();
        int col = M[0].size();
        vector<vector<int>> result(M);
        for(int i = 0;i < row;i++)
        {
            for(int j = 0;j < col;j++)
            {
                int sum = 0;
                int num = 0;
                for(int p = i-1;p <= i+1;p++)
                {
                    for(int q = j-1;q <= j+1;q++)
                    {
                        if(p < 0 || p >= row || q < 0 || q >= col)
                            continue;
                        
                        sum+=M[p][q];
                        num+=1;
                    }
                }
                result[i][j] = sum/num;
            }
        }
        return result;
    }
};
