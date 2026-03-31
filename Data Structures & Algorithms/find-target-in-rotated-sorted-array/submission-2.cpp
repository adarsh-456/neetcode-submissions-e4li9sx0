class Solution {
public:
    int search(vector<int>& nums, int target) {
    int l=nums.size();
    int ind=-1;
    int i=0;int j=l-1;
    int mid;
    // if(l==1){
    //     if(target==nums[0]){
    //         return 0;
    //     }
    //     else{
    //         return -1;
    //     }
    // }
    bool rotate=false;
    if(nums[0]<nums[l-1]){
        rotate=true;
    }
    else{
        while(i<=j){
            mid=(i+j)/2;
            if(nums[mid]>=nums[0]){
                i=mid+1;
            }else{
                if(nums[mid]<nums[mid-1]){
                    break;
                }
                j=mid-1;
            }
        }
    }

    if(rotate){
        if(target>=nums[0] && target<=nums[l-1]){
                i=0;
                j=l-1;
        }
        else{
            return -1;
        }
    }
    else{
        if(target>=nums[0] && target<=nums[mid-1]){
            i=0;
            j=mid-1;
        }
        else if(target>=nums[mid] && target<=nums[l-1]){
            i=mid;
            j=l-1;
        }
        else{
            return -1;
        }
    }
            while(i<=j){
                int middle=(i+j)/2;
                if(nums[middle]==target){
                    return middle;
                }
                else if(nums[middle]>target){
                    j=middle-1;
                }
                else{
                    i=middle+1;
                }
            }
            return -1;

    }
};
