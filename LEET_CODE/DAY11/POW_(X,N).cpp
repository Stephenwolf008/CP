class Solution {
public:
    double myPow(double x, int n) {
        bool isnneg=n<0,isxneg=x<0;
        if(n==0)return 1;
        if(n==1)return x;
        if(n==-1)return 1/x;
        x=abs(x);n=abs(n);
        double power = myPow(x,n/2);
        double ans = (n%2==0)?power*power:power*power*x;
        if(isnneg)
            ans=1/ans;
        if(isxneg and n%2==1)
            ans=-ans;
        return ans;
    }
};
