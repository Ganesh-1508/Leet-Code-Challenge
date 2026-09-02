class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size()-1;
        while(n>=0)
        {
            int number = num[n]-'0';
            if(number%2!=0)
            {
                string ans=num.substr(0,n+1);
                return ans;
            }
            n--;
        }
        return "";
        
    }
};