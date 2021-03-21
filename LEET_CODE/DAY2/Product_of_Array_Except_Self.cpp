class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int pro=1;
        for(int i=0;i<nums.size();i++){
            answer.push_back(pro);
            pro=pro*nums[i];
        }
        pro=1;
        for(int i=answer.size()-1;i>=0;i--){
            answer[i]=answer[i]*pro;
            pro=pro*nums[i];
        }
        return answer;
    }
};
