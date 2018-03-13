// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(n==0) return -1;
        if(n==1) return n;
        int left = 1;
        int right = n;
        while(left<right)
        {
            if(guess(left)==0) return left;
            else if(guess(right)==0) return right;
            int mid = left + (right-left)/2;
            if(guess(mid)==0) return mid;
            else if(guess(mid) == 1) left = mid+1;
            else if(guess(mid) == -1) right = mid;
        }
        return -1;
    }
    
};