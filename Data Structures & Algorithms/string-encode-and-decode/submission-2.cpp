class Solution {
public:
    queue<string> qu;
    int ll;
    string encode(vector<string>& strs) {
        ll=strs.size();
        string s="";
        for( auto st:strs){
            qu.push(st);
            s=s+st;
        }
        return s;
    }
    

    vector<string> decode(string s) {
        
        vector<string> res;
        if(s=="" && ll==0){
            return {};
        }
        string s2="";
        int i=0;
        while( !qu.empty()){
        string st=qu.front();
        qu.pop();
        int l=s.size();
        while(i<l){
            if(st==s2){
                res.push_back(s2);
                s2="";
                break;
            }
            else{
                s2=s2+s[i];
            }
            i++;
        }
        
      }
      res.push_back(s2);
        
        return res;
    }
};
