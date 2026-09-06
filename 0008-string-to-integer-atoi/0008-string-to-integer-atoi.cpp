class Solution {
public:

    int convert(char no)
    {
        switch(no)
        {
            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
        }
        return 0;
    }

    int myAtoi(string s) {

        long long ans = 0;
        int sign = 1;
        int i = 0;

        
        while(i < s.size() && s[i] == ' ')
            i++;

        
        if(i < s.size() && s[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(i < s.size() && s[i] == '+')
        {
            i++;
        }

       
        while(i < s.size())
        {
            if(s[i] < '0' || s[i] > '9')
                break;

            ans = ans * 10 + convert(s[i]);

            if(ans * sign > INT_MAX)
                return INT_MAX;

            if(ans * sign < INT_MIN)
                return INT_MIN;

            i++;
        }

        return ans * sign;
    }
};