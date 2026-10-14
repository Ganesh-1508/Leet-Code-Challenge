class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        if(arr.size()<=1)
        {
            return arr;
        }
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> temp=arr[0];
        for(auto i:arr)
        {
            if(i[0]<=temp[1])
            {
                temp[1]=max(i[1],temp[1]);
            }
            else 
            {
                ans.push_back(temp);
                temp=i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};