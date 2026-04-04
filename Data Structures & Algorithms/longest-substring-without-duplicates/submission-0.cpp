class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0, left = 0, right = 0;
        // point to the first place
        unordered_set<char> hash; // value is (index+1) to avoid 0

        while (right < s.size()) {
            if (hash.count(s[right])) { // exist in hash
                hash.erase(s[left]);
                left++;
            } else {
                int current_len = right - left + 1;
                max_len = current_len > max_len? current_len: max_len;
                hash.insert(s[right]);
                right++;
            }
        }
        
        return max_len;
    }
};
