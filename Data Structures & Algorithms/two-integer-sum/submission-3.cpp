class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complement; // <value, index+1> pair
        // we need index, so traverse via index and store index+1 to avoid not exist
        // we name (target-value) as complement
        for (int i = 0; i < nums.size(); i++) {
            if (complement[nums[i]]) {   // exist
                vector<int> res = {complement[nums[i]] - 1, i};
                return res;
                // return vector<int>{nums[i] - 1, i};
            }
            complement[target - nums[i]] = i+1;
        }
        vector<int> res = {0, 0};
        return res;
    }
};
