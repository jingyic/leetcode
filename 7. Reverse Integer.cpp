class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if(x == -2147483648 )
            return 0;
        if(x<0)
        {
            flag = 1;
            x = abs(x);
        }
        else if(x == 0)
            return 0;
        
        int result = 0;
        
        while(x)
        {
            int rem = x%10;
            x = x/10;
            cout<<result<<endl;
            if(result>INT_MAX/10)
                return 0;
            result = result*10;
            result = result+rem;

        }
        
        if(flag == 0)
            return result;
        else
            return -result;
    }
};
