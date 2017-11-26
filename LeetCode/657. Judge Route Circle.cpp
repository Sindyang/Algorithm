class Solution {
public:
    bool judgeCircle(string moves) {
        int i = 0;
        int x = 0;
        int y = 0;
        for(;i < moves.length();i++)
        {
            switch(moves[i])
            {
                case 'R':x++;break;
                case 'L':x--;break;
                case 'U':y++;break;
                case 'D':y--;break;
            }
        }
        if(x == 0 && y == 0)
            return true;
        return false;
    }
};
