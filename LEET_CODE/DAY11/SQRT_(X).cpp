class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        for(int j=1;x>=0;j+=2){
            x=x-j;
            ans++;
        }
        return ans-1;
    }
};
