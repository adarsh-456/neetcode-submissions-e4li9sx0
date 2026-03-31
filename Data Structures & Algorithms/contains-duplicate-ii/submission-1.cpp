class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int l=nums.size();
        bool flag=false;
        for(int i=0;i<l;i++){
            if(mp.find(nums[i])!=mp.end()){
                // cout<<abs(mp[nums[i]]-i)<<endl;
                if(abs(mp[nums[i]]-i)<=k){
                    return true;
                    
                }
                else{
                    mp[nums[i]]=i;
                }
                
            }
            else{
                
                mp[nums[i]]=i;
            }
        }
        return false;
    }
};