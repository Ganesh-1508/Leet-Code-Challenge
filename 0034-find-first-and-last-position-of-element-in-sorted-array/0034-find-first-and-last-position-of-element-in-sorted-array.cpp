class Solution {
public:
    int firstP(vector<int>& nums, int target) {
        int n=nums.size();
        int first=n;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>=target)
            {
                first=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return first;
    }

 int lastP(vector<int>& nums, int target) {
        int n=nums.size();
        int last=n;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>target)
            {
                last=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return last;
 }
vector<int> searchRange(vector<int>&nums, int target)
{
    int lb = firstP(nums, target);
    if(lb == nums.size() || nums[lb] != target)
    return {-1, -1};
    
    return {firstP(nums,target),lastP(nums,target)-1};
}
};