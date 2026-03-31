class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.size();
        int l2=s2.size();
        // unordered_map<char,int>mp;
        // for (int i=0;i<l2;i++){
        // 
        sort(s1.begin(),s1.end());
        if( l2<l1){
            return false;
        }
        int i=0;
        for( int j=l1-1;j<l2;j++){
            string s=s2.substr(i, j-i+1);
            // cout<<"s"<<s<<endl;
            sort(s.begin(), s.end());
            if( s==s1){
                return true;
            }
            i++;
        }
        return false;
    }
};
