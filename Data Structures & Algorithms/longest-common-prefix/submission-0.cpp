class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        int l=strs.size();
        sort(strs.begin(), strs.end());
        int k=0;
        while(k<strs[0].size()){
            for ( int i=1;i<l;i++){
                if(strs[i][k]!=strs[0][k]){
                    return str;
                }
            }
            str+=strs[0][k];
            k=k+1;
        }

        return str;
    }
};