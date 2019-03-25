class Solution {
public:
    double myPow(double x, int n) {
        // 注意越界问题，用分治法
        if (x == 0) return 0.0;
        if (n == 0) return 1.0;
        
        double ans = 1.0;
        // Seperate positive and negative cases:
        if (n > 0) {
            ans = myPowRecursive(x, n);
            return ans;
        } else {
            ans = x * myPowRecursive(x, -(n + 1));//n+1即防止越界
            return 1.0 / ans;
        }
    }
    
    double myPowRecursive(double x, int n) {
        if (n == 0) return 1.0;
        if (n == 1) return x;
        double res;
        res = myPowRecursive(x, n/2);
        if (n % 2 == 1)
            return x * res * res;
        else 
            return res * res;
    }

};