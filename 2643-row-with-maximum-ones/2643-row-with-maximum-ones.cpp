class Solution {
public:
int lower_bound(vector<int> lb,int n,int no)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(lb[mid]>=no)
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;
}
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int idx=-1;
        int cnt_max=-1;
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            sort(mat[i].begin(),mat[i].end());
            int cnt=mat[i].size()-lower_bound(mat[i],mat[i].size(),1);
            if(cnt>cnt_max)
            {
            cnt_max=cnt;
            idx=i;
            }
        }   
        return {idx,cnt_max};
    }
    
};