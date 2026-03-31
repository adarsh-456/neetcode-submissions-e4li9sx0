class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=nums.size();
        vector<vector<int>>res;
        set<vector<int>> ans;
        vector<int> three(3,0);
        sort(nums.begin(),nums.end());
        for( int i=0;i<l;i++){
            int j=i+1;
            int  k=l-1;
            while(j<k){
                int sum=(nums[i]+nums[j]+nums[k]);
                if(sum==0){
                    // cout<<"dgdgd"<<endl;
                    three[0]=nums[i];
                    three[1]=nums[j];
                    three[2]=nums[k];
                    ans.insert(three);
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for( auto in:ans){
            res.push_back(in);
        }
        return res;
    }
};
