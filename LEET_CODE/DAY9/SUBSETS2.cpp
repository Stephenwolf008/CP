class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        if(nums.size()==0)
            return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans={{}};
        int end=0;
        for(int i=0;i<nums.size();i++){
            int start=0;
            if(i>0 and nums[i]==nums[i-1]){
                start=end;
            }
            end=ans.size();
            for(int j=start;j<end;j++){
                vector<int> temp=ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
