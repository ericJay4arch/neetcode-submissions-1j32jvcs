class Solution {
public:
    // I'd like to create a hash map
    // add to map when num isn't exist
    // return if num exist
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> existed;
        for (int i = 0; i < nums.size(); i++) {
            // not existed
            // insert
            if (existed.find(nums[i]) == existed.end()) {
                existed[nums[i]] = true;
            } else { 
                // existed
                // return
                return true;
            }
        }

        // no duplicate
        return false;
    }
};