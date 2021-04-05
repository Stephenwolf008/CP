class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) mp[nums2[i]]=i;
        for(int i=0; i<nums1.size(); i++) {
             int ele=nums1[i];
             nums1[i]=-1;
             for(int k=mp[ele]; k<n; k++) {
                   if(nums2[k]>ele) {
                       nums1[i]=nums2[k];
                       break;
                   }
             }
        }     
        return nums1;
    }
};
