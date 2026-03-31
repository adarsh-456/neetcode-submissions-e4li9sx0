class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=numbers.size();
        for( int i=0;i<l;i++){
            for( int j=i+1;j<l;j++){
                if(numbers[i]+numbers[j]==target){
                    return {i+1,j+1};
                }
            }
        }
        return {};
    }
};
