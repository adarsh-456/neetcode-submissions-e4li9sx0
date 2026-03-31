class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.size(), l2 = s2.size();
        if (l1 > l2) return false;

        vector<int> freq1(26, 0), freq2(26, 0);
        for (char c : s1) {
            freq1[c - 'a']++;
        }
        for (int i = 0; i < l1; i++) {
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2) return true;
        for (int i = l1; i < l2; i++) {
            freq2[s2[i] - 'a']++;           // add new
            freq2[s2[i - l1] - 'a']--;      // remove old

            if (freq1 == freq2) return true;
        }

        return false;
    }
};