class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> colors(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            if(colors[i]!=0)continue;
            queue<int> q;
            q.push(i);
            colors[i]=1;
            while(!q.empty()){
                int c=q.front();
                q.pop();
                for(auto n:graph[c]){
                    if(colors[n]==0){
                        colors[n]=-colors[c];
                        q.push(n);
                    }else if(colors[n]==colors[c])
                        return false;
                }
            }
        }
        return true;
    }
};
