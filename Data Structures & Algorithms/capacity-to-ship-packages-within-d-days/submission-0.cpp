class Solution {
public:
    int check(int capacity, vector<int>& weights) {
        int days = 1;
        int sum = 0;

        for (int w : weights) {
            if (sum + w > capacity) {
                days++;
                sum = w;
            } else {
                sum += w;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=0;
        int high=weights[0];
        for( auto wt:weights){
            if(low<wt){
                low=wt;
            }
            high+=wt;
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(mid, weights) > days) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};