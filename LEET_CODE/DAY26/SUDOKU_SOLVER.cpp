class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<pair<int,int>> vect;
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                if(board[i][j]=='.')
                    vect.push_back({i,j});
        solve(board,vect,0);
    }
    
    bool solve(vector<vector<char>>&board,vector<pair<int,int>> pos,int cur){
        if(cur>=pos.size())return true;
        else{
            int x=pos[cur].first,y=pos[cur].second;
            for(int i=0;i<9;i++){
                int flag=1;
                char c=i+'1';
                for(int j=0;j<9;j++)
                    if(board[x][j]==c||board[j][y]==c){
                        flag=0;
                        break;
                    }
                int xs=x/3*3,ys=y/3*3;
                for(int z=xs;z<xs+3;++z)
                    for(int w=ys;w<ys+3;++w)
                        if(board[z][w]==c)
                            flag=0;
                if(flag){
                    board[x][y]=c;
                    if(solve(board,pos,cur+1))return true;
                    board[x][y]='.';
                }
            }
        }
        return false;
    }
};
