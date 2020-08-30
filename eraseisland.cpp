class Solution {
private:
    void erase_island(vector<vector<char>>& grid,int x,int y){
         int m=grid.size();
         //if(m!=0) {
         int n=grid[0].size();
         if(x<0 || x>=m|| y<0 || y>=n ||grid[x][y] !='1') 
            return;
         grid[x][y]='2';
         erase_island(grid,x-1,y);
         erase_island(grid,x,y-1);
         erase_island(grid,x+1,y);
         erase_island(grid,x,y+1);
    }  
public:    
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        int m=grid.size();
        if(m!=0) {
        int n=grid[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1') {
                    count++;
                    erase_island(grid,i,j);
                }
            }
        }}
        return count;
    }
};
