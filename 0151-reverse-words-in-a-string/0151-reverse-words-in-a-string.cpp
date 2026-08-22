class Solution {
public:
    string reverseWords(string s) {

        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else if(!temp.empty() && temp.back() != ' ')
            {
                temp += ' ';
            }
        }

        if(!temp.empty() && temp.back() == ' ')
            temp.pop_back();

        s = temp;

        
        reverse(s.begin(), s.end());

        
        int start = 0;

        for(int i = 0; i <= s.size(); i++)
        {
            if(i == s.size() || s[i] == ' ')
            {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};