class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=nums.size();
        int i=0;
        int k=0;
        if(l==1){
            return l;
        }
        for(int j=1; j<l; j++){
            if(nums[i]==nums[j]){
                k++;
            }
            else{
                swap(nums[i+1],nums[j]);
                i++;
            }
        }
        return l-k;
    }
};