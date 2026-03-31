class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dupli;
        for(auto it: nums){
            auto  inn= dupli.find(it);
            if( inn!=dupli.end()){
                return true;
            }
            else{
                dupli[it]=dupli[it]+1;
            }
        }
        return false;
    }
};