class Solution {
    public:
    int characterReplacement(string s, int k)
    {
    int result=0;
    unordered_map<char,int>mp;
    int i=0,j=0;
    int maxx=0;
    while(j<s.length())
    {
    mp[s[j]]++;
    maxx=max(maxx,mp[s[j]]);
        while((j-i+1)-maxx>k){
            mp[s[i]]--;
            i++;
        }

        result=max(result,j-i+1);
        j++;
    }
    return result;
    }
};
