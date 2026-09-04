class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;

        for(char c : s)
            mp[c]++;

        string ans = "";

        while(!mp.empty()) {
            char maxChar = 127;
            int maxFreq = 0;

            for(auto x : mp) {
                if(x.second > maxFreq ||
                   (x.second == maxFreq && x.first < maxChar)) {
                    maxFreq = x.second;
                    maxChar = x.first;
                }
            }

            for(int i = 0; i < maxFreq; i++)
                ans += maxChar;

            mp.erase(maxChar);
        }

        return ans;
    }
};