class Solution {
public:

int bs(const vector<int>& arr,int n)
{
    int low=0;
    int high=arr.size()-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=n)
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;

}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       for(int i=0;i<matrix.size();i++)
       {
        int idx=bs(matrix[i],target);
        if(idx<matrix[i].size() && matrix[i][idx]==target)
        {
            return true;
        }
       }
       return false;
    }
};