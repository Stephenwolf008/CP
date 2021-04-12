class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        int l = strs.size();
        for(int i=0;i<l;i++) {
            string t = strs[i];
            sort(t.begin(),t.end());
            mp[t].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto itr=mp.begin();itr!=mp.end();itr++) 
            res.push_back(itr->second);
        return res;
    }
};
