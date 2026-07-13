class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int> row;

        long long ans = 1;
        row.push_back(1);

        for (int col = 1; col <= rowIndex; col++) {
            ans = ans * (rowIndex - col + 1);
            ans = ans / col;
            row.push_back(ans);
        }

        return row;
    }
};