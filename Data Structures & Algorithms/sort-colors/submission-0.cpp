class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two=0;
        for( auto it: nums){
            if(it==0){
                zero++;
            }
            else if( it==1){
                one++;
            }
            else{
                two++;
            }
        }
        // cout<<zero<<"h"<<one<<""<<two<<endl;
        int k=0;
        while(zero){
            nums[k]=0;
            k++;
            zero--;
        }
        while(one){
            nums[k]=1;
            k++;
            one--;
        }
        while(two){
            nums[k]=2;
            k++;
            two--;
        }
        
    }
};