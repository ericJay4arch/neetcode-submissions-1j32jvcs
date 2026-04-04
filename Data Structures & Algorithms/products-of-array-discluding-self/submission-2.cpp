class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 0); // initialize to 0
        int product = 1; // product of non-zeros
        int num_zeros = 0; 

        // traverse, compute product, count zeros
        for (int num: nums) {
            if (num != 0) {
                product *= num;
                // continue;
            } else {
            // if num == 0
                num_zeros++;
                if (num_zeros == 2) return res; // if zero num >= 2, return all 0
            }
        }

        if (num_zeros == 1) {
            // find position and insert
            auto it = find(nums.begin(), nums.end(), 0);
            *it = product;
            res[it-nums.begin()] = product;
            // nums[it-nums.begin()] = product;
            return res;
        }

        // all are not 0
        for (int i = 0; i < nums.size(); i++) {
            res[i] = product / nums[i];
        }
        return res;
    }
};
