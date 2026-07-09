class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> arr(n,0);
        int neg=1;
        int pos=0;
        for(int i=0;i<n;i++){
            if(nums[i] < 0)
            {
                arr[neg]=nums[i];
                neg=neg+2;
            }
            else
            {
                arr[pos]=nums[i];
                pos=pos+2;
            }
        }
        return arr;
    }
};