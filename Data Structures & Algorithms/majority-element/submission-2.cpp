class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int l=nums.size();
        int ele=nums[0];
        int cnt=1;
         for(int i=0;i<l-1;i++){
            if(ele==nums[i+1]){
                cnt++;
            }
            else{
                cnt--;
                if(cnt==0){
                    cnt=1;
                    ele=nums[i+1];
                    cout<<ele<<endl;
                }
            }
         }
         return ele;
    }
};