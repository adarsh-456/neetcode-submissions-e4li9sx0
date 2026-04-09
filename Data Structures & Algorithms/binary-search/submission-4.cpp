class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int l=nums.size();
        int high=l-1;
        int pos=0;
        if(target>nums[high]||target<nums[0]){
            return -1;
        }
        while(low <= high && target >= nums[low] && target <= nums[high]){
            if(low==high){
                if(nums[low]==target){
                    return low;
                }
            }
            pos = low + ((target - nums[low]) * (high - low)) / (nums[high] - nums[low]);
            if(nums[pos]<target){
                low=pos+1;
            }
            else if(nums[pos]>target){
                high=pos-1;
            }
            else{
                return pos;
            }
        }
        return -1;
    }
};
