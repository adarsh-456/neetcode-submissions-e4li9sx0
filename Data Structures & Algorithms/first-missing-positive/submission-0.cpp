class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0&&nums[i]<=n){
               int valind=nums[i]-1;
               int k=i;
                swap(nums[valind],nums[i]);
                i--;
                if(nums[valind]==nums[k])
                    i++;
                 }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
      return n+1;  
    }
};