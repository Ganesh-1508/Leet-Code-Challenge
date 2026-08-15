class Solution {
public:

    int maxi(vector<int>& v)
    {
        int maxVal = INT_MIN;

        for(int i = 0; i < v.size(); i++)
        {
            maxVal = max(maxVal, v[i]);
        }

        return maxVal;
    }

    long long cal_hours(vector<int>& v, int m)
    {
        long long totalH = 0;

        for(int i = 0; i < v.size(); i++)
        {
            totalH += (v[i] + m - 1LL) / m;
        }

        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h)
    {
        int low = 1;
        int high = maxi(piles);

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            long long totalH = cal_hours(piles, mid);

            if(totalH <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};