class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for( auto it:nums){
            mp[it]++;
        }
    vector<pair<int,int>> vt(mp.begin(),mp.end());
    sort(vt.begin(), vt.end(), [](pair<int,int> &a, pair<int,int> &b) {
            return a.second > b.second; 
        });
    
    vector<int> result;
    int i=1;
    for( auto &pt:vt){
        if(i<=k){
            result.push_back(pt.first);
        }
        else{
            break;
        }
        i++;
        
    }
    return result;
    }
};
