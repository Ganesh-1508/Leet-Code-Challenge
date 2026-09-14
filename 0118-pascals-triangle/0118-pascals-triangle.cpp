class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 0; row < numRows; row++) {

            vector<int> temp;
            long long value = 1;

            temp.push_back(1);

            for (int col = 1; col <= row; col++) {
                value = value * (row - col + 1);
                value = value / col;
                temp.push_back(value);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};