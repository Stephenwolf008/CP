class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> adj(n);
        for(auto i:p)
            adj[i[1]].push_back(i[0]);
        vector<int> in(n);
        for(int i=0;i<n;i++){
            for(auto j:adj[i]){
                in[j]++;
            }
        }
        queue<int> q;
        int c=n;
        for(int i=0;i<n;i++)if(in[i]==0)q.push(i);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            c--;
            for(auto i:adj[node]){
                in[i]--;
                if(in[i]==0)
                    q.push(i);
            }
        }
        return c==0;
    }
};
