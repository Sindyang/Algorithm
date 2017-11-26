class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0){
            return 1;
        }
        int res = 10;
        int sum = 9;
        for(int i = 2;i <= n;i++){
            sum *= (11-i);
            res += sum;
        }
        return res;
    }
};
