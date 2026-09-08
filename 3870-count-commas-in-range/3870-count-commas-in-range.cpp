class Solution {
public:
int count(int c)
{
    int cnt=0;
    for(int i=1000;i<=c;i++)
    {
        if(i!=c) cnt++;
    }
    return cnt+1;
}
    int countCommas(int n) {
        int size=to_string(n).length();
        if(size<=3) return 0;
        int ans=count(n);
        return ans;
    }
};