class Solution {
public: 
    void gen(vector<string>& ans,int open,int close,int n,string current)
    {
        if(current.length()==n*2){
            ans.push_back(current);
            return;
        }
        if(open<n) gen(ans,open+1,close,n,current+"(");
        if(close<open) gen(ans,open,close+1,n,current+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        gen(ans,0,0,n,"");
        return ans;
    }
};
