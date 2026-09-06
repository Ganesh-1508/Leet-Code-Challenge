class Solution {
public:
    int romanToInt(string s) {
        int total=0,prv=0;
        map<char, int> roman = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};
        reverse(s.begin(),s.end());
        for(char c:s)
        {
            int curr=roman[c];
            if(curr<prv) 
            {
                total=total-curr;
            }
            else {
                total=total+curr;
            }
             prv=curr;
        }
        return total;
        
    }
};