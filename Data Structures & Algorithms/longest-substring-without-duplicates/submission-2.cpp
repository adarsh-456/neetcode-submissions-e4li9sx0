class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vt(256);
        int n=s.size();
        int strt=0;
        int maxl=0;
        int i;
        for(i=0;i<n;i++){
            int ch=s[i];
            if(vt[ch]==1){
                maxl=max(maxl,i-strt);
                while(strt<i){
                    if(s[strt]==s[i]){
                        strt++;
                        break;
                    }
                    else{
                        vt[s[strt]]=0;
                        strt++;
                    }
                }
            }
            else{
                vt[ch]=1;
            }
        }
        maxl=max(maxl,i-strt);
        return maxl;
    }
};
