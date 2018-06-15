class Solution {
public:
    int myAtoi(string str) {
        if(str.size() == 0)
        {
            return 0;
        }
        int sign = 1;
        int res = 0;
        
        int i = 0;
        while(str[i] == ' ')
        {
            i++;
            
        }
        if(str[i] == '+'||str[i] == '-')
        {
            sign = 1-2*(str[i] == '-');
            i++;
        }
        while(str[i]>='0'&&str[i]<='9'&&i<str.size())
        {
            
            if(res>(float(INT_MAX)/10.0))
            {
                if(sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            else if(res == 214748364 && i<str.size())
            {
                    
                int w = i;
                if(str[w]>='0'&&str[w]<='9')
                {
                    if(str[w]>='8'&&str[w]<='9')
                        if(sign == -1)
                            return INT_MIN;
                    if(str[w]>='7'&&str[w]<='9')
                        if(sign == 1)
                            return INT_MAX;
                }
            }
            res = res*10+(str[i]-'0');
            i++;
        }
        
        return res*sign;
        
        
    }
};