class Solution {
public:
    bool util(vector<vector<char>>& board, string word,int l,int i,int j){
        if(l==word.length()){
            return true;
        }else if(i>=board.size() || i<0){
            return false;
        }else if(j>=board[0].size() || j<0){
            return false;
        }else if(board[i][j]!=word[l]){
            return false;
        }
        char temp=board[i][j];
        board[i][j]='-';
        if(util(board,word,l+1,i,j+1)){
            return true;
        }
        if(util(board,word,l+1,i,j-1)){
            return true;
        }
        if(util(board,word,l+1,i+1,j)){
            return true;
        }
        if(util(board,word,l+1,i-1,j)){
            return true;
        }
        board[i][j]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                     if(util(board,word,0,i,j)){
                         return true;
                     }  
                }
            }
        }
        return false;
    }
};
