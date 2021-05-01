class Solution {
public:
    int find(int i,vector<int>& parents){
        return parents[i]==-1?i:find(parents[i],parents);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parents(edges.size()+1,-1);
        for(auto edge:edges){
            int i=find(edge[0],parents);
            int j=find(edge[1],parents);
            if(i==j){
                return edge;
            }else{
                parents[j]=i;
            }
        }
        return {};
    }
};
