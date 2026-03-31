class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int it : asteroids) {
            bool destroyed = false;

            while (!st.empty() && st.back() > 0 && it < 0) {
                if (st.back() < abs(it)) {
                    st.pop_back(); // stack asteroid destroyed
                }
                else if (st.back() == abs(it)) {
                    st.pop_back(); // both destroyed
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true; // current asteroid destroyed
                    break;
                }
            }

            if (!destroyed) {
                st.push_back(it);
            }
        }

        return st;
    }
};