class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        int l=prices.size();
        for( int i=1;i<l;i++){
            if(prices[i-1]>=prices[i]){
                buy=prices[i];
            }
            else{
                profit+=(prices[i]-prices[i-1]);
                buy=prices[i];
            }
        }
        return profit;
    }
};