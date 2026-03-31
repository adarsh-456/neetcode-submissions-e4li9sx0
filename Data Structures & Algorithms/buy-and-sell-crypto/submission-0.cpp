class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprof=0;
        int buy=prices[0];
        
        for( int i=1;i<n;i++){
            maxprof=max(maxprof,prices[i]-buy);
            if(prices[i]<buy){
                buy=prices[i];
            }
        }
        return maxprof;
    }
};
