class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int num=*max_element(nums.begin(),nums.end());
        if(num<0)
            return num;
        int curr=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            curr += nums[i];
            if(curr>max)
                max=curr;
            if(curr<0)
                curr=0;
        }
        return max;
    }
};
