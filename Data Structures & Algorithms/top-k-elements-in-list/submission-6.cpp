// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         map<int,int> mp;
//         for( auto it:nums){
//             mp[it]++;
//         }
//     vector<pair<int,int>> vt(mp.begin(),mp.end());
//     sort(vt.begin(), vt.end(), [](pair<int,int> &a, pair<int,int> &b) {
//             return a.second > b.second; 
//         });
//     vector<int> result;
//     int i=1;
//     for( auto &pt:vt){
//         if(i<=k){
//             result.push_back(pt.first);
//         }
//         else{
//             break;
//         }
//         i++;
//     }
//     return result;
//     }
// };
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        
        // Step 1: Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Bucket creation
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto it : freq) {
            int num = it.first;
            int count = it.second;
            bucket[count].push_back(num);
        }

        // Step 3: Collect top k elements
        vector<int> result;
        for (int i = nums.size(); i >= 0 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result;
    }
};