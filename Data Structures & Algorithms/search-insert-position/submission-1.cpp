class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=nums.size();
        if(target>nums[l-1]){
            return l;
        }
        if( target<nums[0]){
            return 0;
        }
        int i=0;
        int j=l;
        int mid;
        while(i<=j){
            mid=(i+j)/2;
            if(nums[mid]<target){
                i=mid+1;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                return mid;
            }
        }
        return i;

    }
};