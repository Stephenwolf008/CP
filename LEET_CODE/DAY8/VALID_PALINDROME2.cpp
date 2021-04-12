bool check(int i , int j , string s){
    while (i<=j)
        if (s[i++]!=s[j--])
            return false ;
    return true ;
}
class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1,c=0;
        while(l<=r){
            if(s[r]!=s[l])
                return (check(l,r-1,s) || check(l+1,r,s));
            r--;
            l++;
        }
        return true;
    }
};
