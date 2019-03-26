class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        if(grid.empty()||grid[0].empty())
            return res;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        queue<int> q;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(grid[i][j]=='1' && !visited[i][j])
                {
                    q.push(i);
                    q.push(j);
                    visited[i][j] = true;
                    res++;
                    while(!q.empty())
                    {
                        int x = q.front();
                        q.pop();
                        int y = q.front();
                        q.pop();
                        if(x-1>=0 && grid[x-1][y]=='1' && !visited[x-1][y])
                        {
                            q.push(x-1);
                            q.push(y);
                            visited[x-1][y] = true;
                        }
                        if(y-1>=0 && grid[x][y-1]=='1' && !visited[x][y-1])
                        {
                            q.push(x);
                            q.push(y-1);
                            visited[x][y-1] = true;
                        }
                        if(x+1<m && grid[x+1][y]=='1'&& !visited[x+1][y])
                        {
                            q.push(x+1);
                            q.push(y);
                            visited[x+1][y] = true;
                        }
                        if(y+1<n && grid[x][y+1]=='1'&& !visited[x][y+1])
                        {
                            q.push(x);
                            q.push(y+1);
                            visited[x][y+1] = true;
                        }
                    }
                }
            }
        }
        return res;
    }
};