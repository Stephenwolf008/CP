bool compr(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> fm;
        for(int i=0;i<nums.size();i++){
            fm[nums[i]]++;
        }
        vector<pair<int,int>> v;
        vector<int> ans;
        for(auto i:fm){
            v.push_back(i);
            push_heap(v.begin(),v.end(),compr);
            if(v.size()==k+1){
                pop_heap(v.begin(),v.end(),compr);
                v.pop_back();
            }
        }
        for(auto i:v){
            ans.push_back(i.first);
        }
        return ans;
    }
};
