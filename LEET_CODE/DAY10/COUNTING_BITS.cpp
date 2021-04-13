class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v;
        for(int i=0;i<=num;i++)
            v.push_back(i);
        for(int i=2;i<=num;i++){
            v[i]=v[i/2]+i%2;
        }
        return v;
    }
};
