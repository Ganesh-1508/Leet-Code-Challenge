class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> A,D;
        for(auto i:intervals)
        {
            A.push_back(i[0]);
            D.push_back(i[1]);
        }
        sort(A.begin(),A.end());
        sort(D.begin(),D.end());

        int i=0;
        int j=0;
        int cnt=0;
        int maxcnt=0;
        while(i<A.size())
        {
            if(A[i]<=D[j])
            {
                cnt++;
                i++;
            }
            else{
                cnt--;
                j++;
            }
            maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
    }
};