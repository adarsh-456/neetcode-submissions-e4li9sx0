// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
        
//         int l=nums.size();
//         if(l==2){
//             int temp=nums[0];
//             nums[0]=nums[1];
//             nums[1]=temp;
//             return nums;
//         }
//         int arrs[l];
//         int arre[l];
//         arrs[0]=nums[0];
//         arre[l-1]=nums[l-1];
//         for( int i=1;i<l;i++){
//             arrs[i]=arrs[i-1]*nums[i];
//             arre[l-1-i]=arre[l-i]*nums[l-1-i];
//         }
//         vector<int> res;
//         res.push_back(arre[1]);
//         for(int i=1;i<l-1;i++){
//             res.push_back(arrs[i-1]*arre[i+1]);
//         }
//         res.push_back(arrs[l-2]);
//     return res;
//     }
// };
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        // Step 1: prefix product
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }

        // Step 2: suffix product
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= suffix;
            suffix *= nums[i];
        }

        return res;
    }
};