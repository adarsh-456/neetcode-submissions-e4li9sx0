class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string curr = "";

        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (curr == "" || curr == ".") {
                    // hiu
                } 
                else if (curr == "..") {
                    if (!st.empty()) st.pop_back();
                } 
                else {
                    st.push_back(curr);
                }
                curr = "";
            } 
            else {
                curr += path[i];
            }
        }

        
        if (curr == "..") {
            if (!st.empty()) st.pop_back();
        } 
        else if (curr != "" && curr != ".") {
            st.push_back(curr);
        }

        string result = "";
        for (string dir : st) {
            result += "/" + dir;
        }

        return result.empty() ? "/" : result;
    }
};