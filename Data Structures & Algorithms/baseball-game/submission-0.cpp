class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        int sum = 0;
        int i=-1;
        for (string op : operations) {
            if (op == "+") {
                int val = st[i] + st[i- 1];
                st.push_back(val);
                i++;
                sum += val;
            }
            else if (op == "D") {
                int val = 2 * st.back();
                st.push_back(val);
                i++;
                sum += val;
            }
            else if (op == "C") {
                sum -= st.back();
                st.pop_back();
                i--;
            }
            else {
                int num = stoi(op);
                st.push_back(num);
                sum += num;
                i++;
            }
        }

        return sum;
    }
};