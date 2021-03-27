class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>> answer;
        vector<int> temp;
        sort(intervals.begin(),intervals.end());
        temp = intervals[0];
        for(auto i:intervals){
            vector<int> interval=i;
            if(temp[1]<interval[0]){
                answer.push_back(temp);
                temp=interval;
            }
            else temp[1]=max(temp[1],interval[1]);
        }
        answer.push_back(temp);
        return answer;
    }
};
