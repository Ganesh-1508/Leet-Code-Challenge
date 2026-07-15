class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c1=0,c2=0;
        int e1=0,e2=0;

        for(int i=0;i<n;i++)
        {
            if(c1==0 && nums[i]!=e2)
            {
                c1=1;
                e1=nums[i];
            }
            else if(c2==0 && nums[i]!=e1)
            {
                c2=1;
                e2=nums[i];
            }
            else if(nums[i]==e1){c1++;}
            else if(nums[i]==e2){c2++;}
            else
            {
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        c1=0;c2=0;
        for(int i=0;i<n;i++)
        {
        if(e1==nums[i]){c1++;}
        else if(e2==nums[i]){c2++;}
        }
        int mini=(int)n/3;
        if(c1>mini){ans.push_back(e1);}
        if(c2>mini){ans.push_back(e2);}
        sort(ans.begin(),ans.end());
        return ans;
    }
};