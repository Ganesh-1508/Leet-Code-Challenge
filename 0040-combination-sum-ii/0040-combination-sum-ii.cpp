class Solution {
public:

    void solve(vector<int>& arr, int i, int target,
               vector<vector<int>>& ans, vector<int>& temp)
    {
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }

        if(target < 0 || i == arr.size())
        {
            return;
        }

        for(int j = i; j < arr.size(); j++)
        {
            // skip duplicate at same level
            if(j > i && arr[j] == arr[j-1])
                continue;

            temp.push_back(arr[j]);

            // move to next index because element can be used only once
            solve(arr, j+1, target-arr[j], ans, temp);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target)
    {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        vector<int> temp;

        solve(arr, 0, target, ans, temp);

        return ans;
    }
};