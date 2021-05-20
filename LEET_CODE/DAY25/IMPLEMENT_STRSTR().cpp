class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        if(m==0)return 0;
        if(n<m || n==0)return -1;
        int d=256;
        int q=101;
        int h=1;
        int txt=0,pat=0;
        for(int i=0;i<m-1;i++)
            h=(h*d)%q;
        for(int i=0;i<m;i++){
            txt=(txt*d+haystack[i])%q;
            pat=(pat*d+needle[i])%q;
        }
        for(int i=0;i<n-m+1;i++){
            if(txt<0)
                txt+=q;
            if(txt==pat)
                if(needle==haystack.substr(i,m))
                    return i;
            if(i<n-m)
                txt=(d*(txt-haystack[i]*h)+haystack[i+m])%q;
        }
        return -1;
    }
};
