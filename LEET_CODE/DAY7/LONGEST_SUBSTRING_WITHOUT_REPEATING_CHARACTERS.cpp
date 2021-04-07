class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,ans=0;
        unordered_set<char> charset;
        while(r<s.length()){
            if(charset.find(s[r])!=charset.end()){
                while(s[l]!=s[r]){
                    charset.erase(s[l]);
                    l++;
                }
                l++;
            }
            else{ 
                charset.insert(s[r]);
                ans = ans>charset.size()?ans:charset.size();
            }
            r++;
        }
    return ans;
    }
};
