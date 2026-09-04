class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int dpt=0;
        for(char c:s)
        {
            if(c=='(')
            {
                cnt++;
                dpt=max(dpt,cnt);
            }
            if(c==')') cnt--;
            
        }
        return dpt;
    }
};