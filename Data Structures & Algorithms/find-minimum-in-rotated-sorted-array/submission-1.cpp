class Solution {
public:
    int findMin(vector<int> &nums) {
        int i=0;
        int l=nums.size();
        int j=l-1;
        if(nums[0]<=nums[l-1]){
            return nums[0];
        }
        while(i<j){
            int mid=(i+j)/2;
            if(nums[mid]>=nums[0]){
                i=mid+1;
            }
            else{
                if(nums[mid]<nums[mid-1]){
                    return nums[mid];
                }
                j=mid-1;
            }
        }
        return nums[i];
    }
};
