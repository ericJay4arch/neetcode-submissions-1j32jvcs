class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> s_hash, t_hash;

        for (int i = 0; i < s.size(); i++) {
            s_hash[s[i]]++;
            t_hash[t[i]]++;
        }

        return s_hash == t_hash;
    }
};
