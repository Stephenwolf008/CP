class Solution {
public:
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int> temp,int s,int d){
        temp.push_back(s);
        if(s==d){
            ans.push_back(temp);
            temp.clear();
        }
        for(auto i:graph[s])
            dfs(graph,ans,temp,i,d);
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(graph,ans,temp,0,graph.size()-1);
        return ans;
    }
};
