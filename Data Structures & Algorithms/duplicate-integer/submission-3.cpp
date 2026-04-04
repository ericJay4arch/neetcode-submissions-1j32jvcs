class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for (auto const &i: nums) {
            hash.insert(i);
        }
        if (hash.size() == nums.size()) return false;
        return true;
    }
};