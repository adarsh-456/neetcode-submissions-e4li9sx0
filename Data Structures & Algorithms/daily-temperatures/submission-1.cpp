class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
         int l=temperatures.size();
         vector<int> result(l,0);
        //  for( int i=0;i<=l-1;i++){
        //     int curr=temperatures[i];
        //     for( int j=i+1;j<l;j++){
        //         if(curr<temperatures[j]){
        //             result[i]=j-i;
        //             break;
        //         }
        //     }
        //  }
        stack<int> st;
        for(int i=0;i<l;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int prev=st.top();
                st.pop();
                result[prev]=i-prev;
            }
            st.push(i);
        }
         return result;
    }
};
