class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_w=0;
        int l=0,r=height.size()-1;
        while(l<r){
            max_w=max(max_w,min(height[l],height[r])*(r-l));
            if(height[l]>=height[r])
                r--;
            else l++;
        }
        return max_w;
    }
};
