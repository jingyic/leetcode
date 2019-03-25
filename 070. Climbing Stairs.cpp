class Solution {
public:
    int climbStairs(int n) {
        if(n<=0) return -1;
        
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        
        if(n == 1||n == 2) return v[n-1];
        for(int i = 3;i<=n;i++)
        {
            v.push_back(v[i-2]+v[i-3]);
        }
        return v[n-1];
    }
};