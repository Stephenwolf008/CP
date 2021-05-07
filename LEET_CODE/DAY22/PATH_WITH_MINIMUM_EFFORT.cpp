class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {                                                 priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        q.push({0,{0,0}});
        int m=heights.size(),n=heights[0].size();
        vector<vector<int>> dist(m,vector<int>(n,INT_MAX));
        dist[0][0]=0;
        int x[]={0,-1,0,1};
        int y[]={1,0,-1,0};
        while(!q.empty()){
            int w=q.top().first,i=q.top().second.first,j=q.top().second.second;
            q.pop();
            if(i==m-1 && j==n-1)return w;
            for(int k=0;k<4;k++){
                int cx=i+x[k];
                int cy=j+y[k];
                if(cx>=0 && cx<m && cy>=0 && cy<n){
                    int wt=max(abs(heights[i][j]-heights[cx][cy]),w);
                    if(wt<dist[cx][cy]){
                        dist[cx][cy] = wt;
                        q.push({wt,{cx,cy}});
                    }
                }
            }
        }
        return 0;
    }
};
