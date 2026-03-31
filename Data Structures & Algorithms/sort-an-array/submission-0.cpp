class Solution {
public:
    void merge(int left, int mid, int right, vector<int>& nums) {
        vector<int> temp;
        int i = left;
        int j = mid + 1;
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= right) {
            temp.push_back(nums[j]);
            j++;
        }
        for (int k = 0; k < temp.size(); k++) {
            nums[left + k] = temp[k];
        }
    }
    void divide(int l, int r, vector<int>& nums) {
        if (l >= r) return;
        int mid = (l + r) / 2;
        divide(l, mid, nums);
        divide(mid + 1, r, nums);
        merge(l, mid, r, nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        divide(0, nums.size() - 1, nums);
        return nums;
    }
};