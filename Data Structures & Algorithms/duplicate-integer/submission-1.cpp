class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (auto const &i: nums) {
            if (seen.find(i) != seen.end()) // exist
                return true;
            else 
                seen.insert(i);
        }
        return false;
    }
};