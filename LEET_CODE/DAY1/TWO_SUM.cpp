class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> nmap;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nmap.find(target-nums[i])!=nmap.end()){
                v.push_back(nmap[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            nmap.insert({nums[i],i});
        }
        return v;
    }
};
