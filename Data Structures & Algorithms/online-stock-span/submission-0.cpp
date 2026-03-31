class StockSpanner {
public:
    vector<int> st;
    int i=-1;
    int count;
    StockSpanner() {
        count =0;
    }
    
    int next(int price) {
        count=1;
        if( st.empty()){
            st.push_back(price);
            i++;
            
        }
        else{
            int k=i;
            while( k>=0 && st[k]<=price){
                count++;
                k--;
            }
            st.push_back(price);
            i++;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */