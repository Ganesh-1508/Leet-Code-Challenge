class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> hash(n * n + 1, 0);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                hash[grid[i][j]]++;
            }
        }
        int miss=-1,rep=-1;
        for(int i=1;i<=n*n;i++)
        {
            if(hash[i]==2){ rep=i; }
            else if(hash[i]==0){ miss=i; }
        }
        return {rep,miss};
    }
};