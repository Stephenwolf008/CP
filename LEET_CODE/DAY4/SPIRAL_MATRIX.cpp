class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int minr=0,minc=0,maxr=a.size()-1,maxc=a[0].size()-1;
        int c=0,t=a.size()*a[0].size();
        vector<int> ans;
        while(c<t){
            for(int i=minr,j=minc;j<=maxc && c<t;j++){
                ans.push_back(a[i][j]);
                c++;
            }
            minr++;
            for(int i=minr,j=maxc;i<=maxr && c<t;i++){
                ans.push_back(a[i][j]);
                c++;
            }
            maxc--;
            for(int i=maxr,j=maxc;j>=minc && c<t;j--){
                ans.push_back(a[i][j]);
                c++;
            }
            maxr--;
            for(int i=maxr,j=minc;i>=minr && c<t;i--){
                ans.push_back(a[i][j]);
                c++;
            }
            minc++;
        }
    return ans;
}
};
