class Solution {
public:
    int reqDay(vector<int> arr,int mid)
    {
        int no_of_req_days=1;
        int load=0;
        for(int i=0;i<arr.size();i++)
        {
            if(load+arr[i]>mid)
            {
                no_of_req_days++;
                load=arr[i];
            }
            else load+=arr[i];
        }
        return no_of_req_days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);

        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(reqDay(weights,mid)<= days)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};