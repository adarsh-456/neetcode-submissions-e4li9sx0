class MinStack {
private:
    std:: stack<int> s;
    std:: stack<int> min_s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(min_s.empty()){
            min_s.push(val);
        }
        else if(min_s.top()>=val){
            min_s.push(val);
            }
        }
        
    
    
    void pop() {
        if(!s.empty()){
            if(s.top()==min_s.top()){
                s.pop();
                min_s.pop();
            }
            else{
                s.pop();
            }
            
        }    
    }
    
    int top() {
        if(!s.empty()){
            return s.top();
        }
    }
    
    int getMin() {
       return min_s.top();
    }

};
