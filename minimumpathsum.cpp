class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m==0)
            return 0;
        int n = grid[0].size();
        int dp[m][n];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                dp[i][j] = grid[i][j];
            
            if(i>0 && j>0) //when we are not in the 1st row or column
                dp[i][j]+= min(dp[i-1][j] , dp[i][j-1]);
            else if(i>0) //when we are in the 1st column
                dp[i][j]+=dp[i-1][j];
            else if(j>0) // when we are in the 1st row
                dp[i][j]+=dp[i][j-1];
        }
    } return dp[m-1][n-1];
    }
};
