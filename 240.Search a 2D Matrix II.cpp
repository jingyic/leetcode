class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        int m = matrix.size();
        int n = matrix[0].size();
        
        int i = 0;
        int j = n-1;
        while(i>=0&&i<m&&j<n&&j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else 
                j--;
        }
        return false;
        
    }
};