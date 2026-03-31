class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int ans=0;
        for( auto it:nums){
            st.emplace(it);
        }
        for( auto ele:st){
            if(st.find(ele-1)==st.end()){
                int cnt=1;
                while(st.find(ele+1)!=st.end()){
                    cnt++;
                    ele+=1;
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
