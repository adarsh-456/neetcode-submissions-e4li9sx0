class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dupli;
        for(auto it: nums){
            if(dupli.end()!=dupli.find(it)){
                return true;
            }
            else{
                dupli[it]=1;
            }
        }
        return false;
    }
};