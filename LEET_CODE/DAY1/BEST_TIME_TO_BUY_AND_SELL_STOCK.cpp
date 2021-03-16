class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_num=prices[0];
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            if(min_num>prices[i]){
                min_num=prices[i];
            }
            else
            if(abs(min_num-prices[i])>max_profit){
                max_profit=abs(min_num-prices[i]);
            }
        }
        return max_profit;
    }
};
