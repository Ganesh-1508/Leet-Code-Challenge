class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            int reversedIndex = 'z' - s[i] + 1;
            int position = i + 1;

            ans += reversedIndex * position;
        }

        return ans;
    }
};