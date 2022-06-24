class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        int maxPrice = INT_MIN;

        for(int i=prices.size()-1;i>=0;i--){
            if(prices[i]<maxPrice){
                diff = max(diff,maxPrice-prices[i]);
            }
            else{
                maxPrice = prices[i];
            }
        }
        return diff;
    }
};
