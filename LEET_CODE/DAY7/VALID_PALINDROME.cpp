class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
            while(l<r){
            if(!isalnum(s[r]))
                r--;
            if(!isalnum(s[l]))
                l++;
            if(isalnum(s[l]) && isalnum(s[r])){
                if(s[l]>='A' && s[l]<='Z')
                    s[l]=tolower(s[l]);
                if(s[r]>='A' && s[r]<='Z')
                    s[r]=tolower(s[r]);
                if(s[l]!=s[r])
                    return false;
                l++;r--;
            }
        }
        return true;
    }
};
