class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==0) return 0;
        if(cost.size()==1) return cost[0];
        
        int len = cost.size()+1;
        int dp[len];
        for(int i = 0;i<2;i++)
        {
            dp[i] = 0;
        }
        
        for(int i = 2;i<len;i++)
        {
            dp[i] = min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        
        return dp[len-1];
    }
};