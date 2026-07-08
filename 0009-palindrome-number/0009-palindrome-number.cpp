class Solution {
public:
    bool isPalindrome(int x) {
        int org=x;
        long long rev=0;
        int rem=0;
        while(x>0)
        {
            rem=x%10;
            x=x/10;
            rev=rev*10+rem;
        }
        if(org==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};