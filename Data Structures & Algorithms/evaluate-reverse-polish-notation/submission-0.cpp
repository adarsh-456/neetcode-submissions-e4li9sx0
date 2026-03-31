class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for( auto  st:tokens){
            if(st!="+" && st!="-" && st!="*" && st!="/"){
                int num =stoi(st);
                stk.push(num);
            }
            else{
                int b=stk.top();
                stk.pop();
                int a=stk.top();
                stk.pop();
                if(st=="+"){
                    int n=a+b;
                    stk.push(n);
                }
                else if(st=="-"){
                    int n=a-b;
                    stk.push(n);
                }
                else if(st=="*" ){
                    int n=a*b;
                    stk.push(n);
                }
                else{
                    int n=a/b;
                    stk.push(n);
                }
                
            }
        }
        return stk.top();
    }
};
