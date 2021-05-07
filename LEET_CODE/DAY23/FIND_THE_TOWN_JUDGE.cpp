class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> vis(N+1);
        for(int i=0;i<trust.size();i++){
            vis[trust[i][0]]--;
            vis[trust[i][1]]++;
        }
        for(int i=1;i<vis.size();i++)
            if(vis[i]==N-1)return i;
        return -1;
    }
};
