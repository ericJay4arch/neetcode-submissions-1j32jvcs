class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int difference = target - nums[i];
            if ( seen.find(difference) != seen.end() ) {
                // existed
                indices.push_back(seen[difference]);
                indices.push_back(i);
                return indices;
            } else {
                seen[nums[i]] = i;
            }
        }

        return indices;
    }
};
