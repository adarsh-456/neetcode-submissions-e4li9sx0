class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int l=nums.size();
        for(int i=0;i<l;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for( int j=i+1;j<l;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1;
                int m=l-1;
                while(k<m){
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[m];
                    if(sum==target){
                        ans.push_back({nums[i], nums[j], nums[k], nums[m]});
                        k++;
                        m--;
                        // Skip duplicate for j
                        while (k < m && nums[k] == nums[k - 1]) k++;
                        // Skip duplicate for k
                        while (k < m && nums[m] == nums[m + 1]) m--;
                    }
                    else if (sum < target) {
                        k++;
                    }
                    else {
                        m--;
                    }
                }
            }    
        }
        return ans;
    }
};