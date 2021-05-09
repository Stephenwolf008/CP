class Solution {
public:
    int findp(int n,vector<int>& parent){
        if(n==parent[n])return n;
        parent[n]=findp(parent[n],parent);
        return parent[n];
    }
    int findCircleNum(vector<vector<int>>& iC) {
        vector<int> parent(iC.size()),rank(iC.size());
        int ans=iC.size();
        for(int i=0;i<parent.size();i++)parent[i]=i;
        for(int i=0;i<iC.size();i++){
            for(int j=i+1;j<iC[0].size();j++){
                if(iC[i][j]==1){
                    int u=findp(i,parent);
                    int v=findp(j,parent);
                    if(u!=v)ans--;
                    if(rank[u]<rank[v])
                        parent[u]=v;
                    else if(rank[v]<rank[u])
                        parent[v]=u;
                    else{
                        parent[u]=v;
                        rank[v]++;
                    }
                }
            }
        }
        return ans;
    }
};
