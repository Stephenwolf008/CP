class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return NULL;
        vector<int> l(nums.begin(),nums.begin()+(n/2));
        vector<int> r(nums.begin()+(n/2)+1,nums.end());
        return new TreeNode(nums[n/2],sortedArrayToBST(l),sortedArrayToBST(r));
    }
};
