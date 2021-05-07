class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n);
        for(int i=0;i<edges.size();i++){
            vis[edges[i][1]]=true;
        }
        vector<int> ans;
        for(int i=0;i<vis.size();i++)
            if(vis[i]==false)
                ans.push_back(i);
        return ans;
    }
};
