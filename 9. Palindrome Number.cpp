class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int y = 0;
        int temp = x;
        while(x)
        {
            int rem = x%10;
            x = x/10;
            y = y*10+rem;
        }
        if(y == temp)
            return true;
        else
            return false;
    }
};