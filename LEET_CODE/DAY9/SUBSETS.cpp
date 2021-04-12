class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        for(auto i:nums){
        vector<vector<int>> temp;
        temp=ans;
        for(auto &j :temp){
            j.push_back(i);
            ans.push_back(j);
            }
        }
        return ans;
    }
};
