class Solution {
public:
    int possible(vector<int> arr,int day,int m,int k)
    {
        int n=arr.size();
        int cnt=0;
        int no_of_b=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]<=day)
            {
                cnt++;
            }
            else {
                no_of_b=no_of_b+(cnt/k);
                cnt=0;
            }
        }
            no_of_b+=(cnt/k);
            if(no_of_b >= m) return true;
            else return false;
    }
    int minNo(vector<int> arr)
    {
        int minN=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            minN=min(arr[i],minN);
        }
        return minN;
    }

    int maxNo(vector<int> arr)
    {
        int maxN=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            maxN=max(arr[i],maxN);
        }
        return maxN;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=minNo(bloomDay);
        int high=maxNo(bloomDay);
        long long val = m*1LL *k*1LL;

        if(val>n) return -1;
        while(low<=high)
        {
            int mid = low + (high - low) / 2;
            if(possible(bloomDay,mid,m,k)== true){
                high=mid-1;
            } 
            else low=mid+1;
        }
        //if(low==99991) return -1;
        return low;
       
    }
};