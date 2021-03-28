bool compare(vector<int> a, vector<int> b){
    return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        if(intervals.size()==0)
            return 0;
        sort(intervals.begin(),intervals.end(),compare);
        vector<int> temp=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(temp[1]>intervals[i][0])
            count++;
            else temp=intervals[i];
        }
        return count;
    }
};
