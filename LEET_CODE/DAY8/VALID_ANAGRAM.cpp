class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        if(s.length()!=t.length()){
            return false;
        }
        else {
            for(int i=0;i<s.length();i++){
                if(m[s[i]]==0)m[s[i]]=1;
                else
                m[s[i]]++;
            }
            for(int i=0;i<t.length();i++){
                m[t[i]]--;
                if(m[t[i]]<0)
                    return false;
            }
        }
        return true;
    }
};
