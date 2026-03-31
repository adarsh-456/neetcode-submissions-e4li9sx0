class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for( auto chr:s){
            if(chr!=' ' && (isalpha(chr) || isdigit(chr))){
                ss+=tolower(chr);
            }
        }
        int i=0;
        int j=ss.size()-1;
        while(i<=j){
            if(ss[i]!=ss[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
