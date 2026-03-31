class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int l=nums.size();
        int j=l-1;
        if( l==0){
            return 0;
        }
        if( l==1 && nums[0]==val){
            return 0;
        }
        while(i<j){
            if(nums[i]!=val){
                i++;
            }
            else{
                while(i<j && nums[j]==val ){
                    j--;
                }
                if(i==j){
                   return i;                        
                }
                nums[i]=nums[i]^nums[j];
                nums[j]=nums[i]^nums[j];
                nums[i]=nums[i]^nums[j];
                j--;
            }
            
        }
        return i+1;
    }
};