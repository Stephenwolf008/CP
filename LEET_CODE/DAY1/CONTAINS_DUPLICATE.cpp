class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        if(nums.size()==1)
            return false;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
            if(m.find(nums[i])->first==nums[i]){
                return true;
                }
            }
            else m[nums[i]]=i;
        }
        return false;
    }
};
