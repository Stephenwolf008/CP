class Solution {
public:
    void dfs(vector<vector<char>>& grid,vector<vector<bool>>& vis,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())return;
        if(grid[i][j]=='1')
            if(!vis[i][j]){
                vis[i][j]=true;
                dfs(grid,vis,i-1,j);
                dfs(grid,vis,i,j-1);
                dfs(grid,vis,i,j+1);
                dfs(grid,vis,i+1,j);
            }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && vis[i][j]==false){
                    count++;
                    dfs(grid,vis,i,j);
                }
            }
        }
        return count;
    }
};
