class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        for( char par:s){
            
            if(par==')'){
                if(!stck.empty()){
                    if(stck.top()!='('){
                        return false;
                    }
                    else{
                        stck.pop();
                    }
                }
                else{
                    return false;
                }
            }
            else if( par=='}' ){
                if(!stck.empty()){
                    if(stck.top()!='{'){
                            return false;
                        }
                    else{
                        stck.pop();
                        }
                }
                else{
                    return false;
                }
            }               
            else if(par==']'){
                if(!stck.empty()){
                    if(stck.top()!='['){
                            return false;
                        }
                        else{
                            stck.pop();
                        }
                }
                else{
                    return false;
                }
            }
            else{
                stck.push(par);
            }
            

        }
        if(stck.empty()){
            return true;
        }
        return false;
    }
};
