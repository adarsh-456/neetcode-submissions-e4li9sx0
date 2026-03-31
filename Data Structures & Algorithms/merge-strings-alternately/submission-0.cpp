class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
         int l1=word1.size();
         int l2=word2.size();
         int lim=l1<l2?l1:l2;
         cout<<"l1"<<l1<<"l2"<<l2<<"lim"<<lim<<endl;
         int i;
         for (i=0;i<lim;i++){
            s.push_back(word1[i]);
            s.push_back(word2[i]);
         }
         if(l1<l2){
            s+=word2.substr(i);
         }
         else if(l2<l1){
            s+=word1.substr(i);
         }
        return s;
    }
};