class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        // auto ind=sort(strs[0].begin(),strs[0].end());
        // mp[ind]=mp[ind].push_back(strs[0]);
        int l=strs.size();
        for( int i=0;i<l;i++){
            string its=strs[i];
            sort(its.begin(),its.end());
            mp[its].push_back(strs[i]);
            
        }
        for( auto ll:mp){
        res.push_back(ll.second);
        }
        return res;
    }
};
