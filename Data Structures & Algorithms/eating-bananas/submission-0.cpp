class Solution {
public:
    long long int check( int rate,vector<int>& arr){
        int cnt=0;
        for(auto it:arr){
            cnt+=(it+rate-1)/rate;
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int max_val=piles[0];
        for( auto it: piles){
            if(max_val<it){
                max_val=it;
            }
        }
        int ans=max_val;
        int j=max_val;
        while(i<=j){
            int mid=(i+j)/2;
            long long int count=check(mid,piles);
            if(count<=h){
                j=mid-1;
                ans=mid;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
        
    }
};
