class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l=nums.size();
        if(k%l){
            k=k%l;
            int i=0;
            int j=l-1;
            while(i<j){
                swap(nums[i],nums[j]);
                i++;j--;
            }
            i=0;
            j=k-1;
            while(i<j){
                swap(nums[i],nums[j]);
                i++;j--;
            }
            i=k;
            j=l-1;
            while(i<j){
                swap(nums[i],nums[j]);
                i++;j--;
            }                      

        }
    }
};