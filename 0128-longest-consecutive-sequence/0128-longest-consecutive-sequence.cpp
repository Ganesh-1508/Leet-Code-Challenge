class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int lastsmall=INT_MIN;
        int cnt=0;
        int longest=1;
        if(n==0){
            return 0;
        }
        for( int i=0; i<n;i++)
        {
            if(nums[i]-1 == lastsmall)
            {
                cnt=cnt+1;
                lastsmall=nums[i];
            }
            else if(lastsmall!=nums[i])
            {
                cnt=1;
                lastsmall=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};