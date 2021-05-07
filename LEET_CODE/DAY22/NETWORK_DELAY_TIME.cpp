class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> distance(n+1,INT_MAX);
        distance[k]=0;
        for(int i=0;i<n;i++){
            bool flag=false;
            for(vector<int> time:times)
                if(distance[time[0]]!=INT_MAX and distance[time[1]]>distance[time[0]]+time[2]){
                    flag=true;
        distance[time[1]]=distance[time[0]]+time[2];
                }
            if(!flag)break;
        }
        int ans=INT_MIN;
        for(int i=1;i<=n;i++)
            ans=max(ans,distance[i]);
        return ans==INT_MAX?-1:ans;
    }
};
