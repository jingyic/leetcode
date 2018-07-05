class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        if(m==0||n==0)
            return 0;
        
        //vector<vector<int>> sum(m,vector<int>(n));
        int sum[1000][1000] = {0};
        sum[0][0] = grid[0][0];
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                
                if(i==0&&j!=0)
                    sum[i][j] = sum[i][j-1]+grid[i][j];
                else if(j==0&&i!=0)
                    sum[i][j] = sum[i-1][j]+grid[i][j];
                else if(i!=0&&j!=0)
                    sum[i][j] = min(sum[i-1][j],sum[i][j-1])+grid[i][j];
                    
            }
        }
        
        return sum[m-1][n-1];
    }
};