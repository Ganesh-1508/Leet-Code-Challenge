class Solution {
public:

int maxrowidx(vector<vector<int>>& mat,int n,int m,int mid)
{
    int idx=-1;
    int max_value=-1;
    for(int i=0;i<n;i++)
    {
        if(mat[i][mid]>max_value)
        {
            max_value=mat[i][mid];
            idx=i;
        }
    }
    return idx;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int maxrow=maxrowidx(mat,n,m,mid);
            int left=mid-1 >=0?mat[maxrow][mid-1]:-1;
            int right=mid+1 <m?mat[maxrow][mid+1]:-1;

            if(mat[maxrow][mid]>left && mat[maxrow][mid]>right)
            {
                return {maxrow,mid};
            }
            else if(mat[maxrow][mid]<left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};