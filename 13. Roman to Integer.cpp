class Solution {
public:
    int romanToInt(string s) {
        if(s == "")
            return 0;
        int number = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == 'I')
                number = number+1;
            else if(s[i] == 'V')
                number = number+5;
            else if(s[i] == 'X')
                number = number+10;
            else if(s[i] == 'L')
                number = number+50;
            else if(s[i] == 'C')
                number += 100;
            else if(s[i] == 'D')
                number += 500;
            else if(s[i] == 'M')
                number += 1000;
            
            if(i>0)
            {
                
                if((s[i] == 'V')&&s[i-1] == 'I')
                    number = number - 2;
                else if((s[i] == 'X')&&s[i-1] == 'I')
                    number -= 2;
                else if((s[i] == 'L'||s[i]=='C')&&s[i-1] == 'X')
                    number -= 20;
                else if((s[i] == 'D'||s[i] == 'M')&&s[i-1] == 'C')
                    number -= 200;
            }
        }
        return number;
    }
};