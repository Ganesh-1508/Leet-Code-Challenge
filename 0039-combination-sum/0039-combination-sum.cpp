class Solution {
public:

  set<vector<int>> s;
  void solve(vector<int>& arr,int i,int target, vector<vector<int>> &ans,vector<int> &temp)
  {
    if(target<0 || i==arr.size()) 
    {
        return;
    }
    if(target==0)
    {
        if(s.find(temp)==s.end())
        {
            ans.push_back(temp);
            s.insert(temp);
        }
        
        return;
    }
    temp.push_back(arr[i]);
    solve(arr,i+1,target-arr[i],ans,temp);
    solve(arr,i,target-arr[i],ans,temp);
    temp.pop_back();
    solve(arr,i+1,target,ans,temp);
  }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(arr,0,target,ans,temp);
        return ans;
    }
};