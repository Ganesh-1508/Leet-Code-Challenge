class Solution {
public:
    void solve(int start,vector<int>& num,vector<int>& temp,vector<vector<int>>& ans)
    {
        ans.push_back(temp);

        for(int i=start;i<num.size();i++)
        {
            if(i>start && num[i]==num[i-1]){ continue; }

            temp.push_back(num[i]);
            solve(i+1,num,temp,ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        solve(0,nums,temp,ans);

        return ans;
    }
};