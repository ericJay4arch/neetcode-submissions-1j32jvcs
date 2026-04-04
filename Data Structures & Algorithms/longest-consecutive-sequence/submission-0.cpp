class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sets(nums.begin(), nums.end());
        int max_len = 0;
        // I will traverse through input
        // for every num, if num - 1 or num + 1 exist in some sets
        // add to that sets
        // we will choose only where num-1 didn't exist as start
        for (int num: nums) {
            // num should not be a start
            if (sets.count(num-1) != 0) continue;
            // now num should be a start
            // find until the end of consequtive array
            int next = num + 1, current_len = 1; // num is the first
            while (sets.count(next) != 0) {
                // while next exist
                current_len++;
                next++;
            }
            
            if (max_len < current_len) max_len = current_len;
        }
        return max_len;
    }
};
